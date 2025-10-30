# Vetores

Os vetores são tightly packed em um único registrador de 32 bits.

| bit 0-7      | bit 8-15     | bit 16-23    | bit 24-31    |
|--------------|--------------|--------------|--------------|
| Componente X | Componente Y | Componente Z | Componente W |

Os componentes podem ser signed ou unsigned. Para uso de cores, recomenda-se o uso de operações unsigned. Para uso de vetores 3D ou 4D, recomenda-se operações signed.

# Instruções
## Pack

Para valores signed, são 10 operações no total. É necessário 4 ANDs para mascarar caso um componente seja negativo, evitando overflow para outros componentes.
```
vec4 = ((x & 0xFF) << 24) 
    | ((y & 0xFF) << 16) 
    | ((z & 0xFF) << 8) 
    | (w & 0xFF)
```
Para valores unsigned, são 6 operações no total.
```
vec4 = ((x) << 24) 
    | ((y) << 16) 
    | ((z) << 8) 
    | (w)
```
Para implementação, apenas são utilizados fios. Para simplificar, o carregamento pode ser feito com 2 componentes de cada vez, sem ter que implementar o pseudo tipo R4.
Exemplo teórico:
```
t0 # vetor
t1 -> t4 # componentes
pack.xy t0, t1, t2 # carrega x e y
pack.zw t0, t3, t4 # carrega z e w
```
ou até carregar em duas operações 3 componentes
```
t0 # vetor
t1 -> t3 # componentes
add t0, zero, t3
pack.xy t0, t1, t2 # carrega x e y
```

O formato da instrução é:
|31-25|24-20|19-15|14-12|11-7 |6-0  |
|-----|-----|-----|-----|-----|-----|
|funct7| rs2 | rs1 |funct3| rd  |opcode|
|000\|comp1\|comp2 |componente 2|componente 1|000|vetor destino|0001011|

Os valores `comp1` e `comp2` são de 2 bits e indicam qual componente está sendo carregada no rs1 e rs2. Exemplo:
```
comp1 = 0b00 # rs1 tem componente X
comp2 = 0b01 # rs2 tem componente Y
```



## Extract

6 operações totais para extrair as 4 componentes de um vetor.
```
x -> 1 shift
y -> 1 shift + 1 and
z -> 1 shift + 1 and
w -> 1 and
```
A extração de cada componente pode ser feita em um ciclo usando apenas fios.

O formato da instrução é:
|31-25|24-20|19-15|14-12|11-7 |6-0  |
|-----|-----|-----|-----|-----|-----|
|funct7| rs2 | rs1 |funct3| rd  |opcode|
|0|signed\|x\|y\|z\|w|vetor fonte|001|registrador destino|0001011|

> **TODO:** Vale a pena usar o funct7 para isso?

O campo rs2 contém flags sobre a instrução. O primeiro bit indica se a componente
extraída é signed(1) ou unsigned(0). Os próximos 4 bits indicam qual componente extrair. Apenas um bit deve estar setado. Exemplo:
```
rs2 = 0b0_0100 # extrai a componente Y como unsigned
rs2 = 0b1_1000 # extrai a componente X como signed
rs2 = 0b0_0010 # extrai a componente Z como unsigned
rs2 = 0b1_0001 # extrai a componente W como signed
```


## Linear Interpolation

Operação básica da computação gráfica. Interpola linearmente entre 2 valores com base em um terceiro valor. Primeira das operações mais complexas, precisa de 4 ciclos para executar(incluindo writeback), por causa do pipeline, é executada em um ciclo. Para aceleração de operações gráficas, o valor interpolado é um vetor de 4 componentes. 

Como não há floats, a parametrização é feita com um `uint8_t`(0-255). A operação normal pode ser descrita por:
```
result = start + (end - start) * (param / 255.0)
ou
result = start * (1 - param / 255.0) + end * (param / 255.0)
```

Traduzindo para hardware, em 4 ciclos, chegamos na seguinte sequência:
```
C1: t = rs2 - rs1
C2: t = (t * rd) >> 8
C3: t = rs1 + t
C4: rd = WriteBack
```
Custo de hardware:
```
C1: 4x Add_Sub(8 bits)
C2: 4x Mul(8 bits) # o shift é com fios
C3: 4x Add(8 bits)
```

O formato da instrução é:
|31-25|24-20|19-15|14-12|11-7 |6-0  |
|-----|-----|-----|-----|-----|-----|
|funct7| rs2 | rs1 |funct3| rd  |opcode|
|0000000|valor final|valor inicial|010|vetor destino/variável paramétrica|0001011|

## Produto Escalar

Operação que calcula o produto escalar entre dois vetores de 4 componentes. Devido a natureza, caso queira apenas 3 componentes, basta o 4º componente de um dos vetores ser zero. A operação é descrita por:
```
result = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w
```
Em hardware, a operação pode ser feita em 4 ciclos, encaixando no pipeline corretamento, junto com o `lerp`.
```
C1: x = rs1.x * rs2.x
    y = rs1.y * rs2.y
    z = rs1.z * rs2.z
    w = rs1.w * rs2.w
C2: t1 = x + y
    t2 = z + w
C3: t = t1 + t2
C4: rd = WriteBack
```
O custo de hardware dessa instrução é:
```
C1: 4x Mul(8 bits->16 bits)
C2: 2x Add(17 bits)
C3: 1x Add(18 bits)
```
Com essas larguras, é garantido que o resultado não terá overflow.
O formato da instrução é:
|31-25|24-20|19-15|14-12|11-7 |6-0  |
|-----|-----|-----|-----|-----|-----|
|funct7| rs2 | rs1 |funct3| rd  |opcode|
|0|valor final|valor inicial|011|vetor destino/variável paramétrica|0001011|

## Adição Saturada

Realiza a adição de 2 vetores de 4 componentes, com saturação em 255. Ou seja, caso o resultado de uma componente seja maior que 255, o valor é truncado para 255. A operação é descrita por:
```
result.x = min(rs1.x + rs2.x, 255)
result.y = min(rs1.y + rs2.y, 255)
result.z = min(rs1.z + rs2.z, 255)
result.w = min(rs1.w + rs2.w, 255)
```
Em hardware, a operação pode ser feita em 2 ciclos:
```
C1: t0 = rs1.x + rs2.x
    t1 = rs1.y + rs2.y
    t2 = rs1.z + rs2.z
    t3 = rs1.w + rs2.w
C2: if(overflow t0) t0 = 255
    if(overflow t1) t1 = 255
    if(overflow t2) t2 = 255
    if(overflow t3) t3 = 255
C3: t = t0 << 24 | t1 << 16 | t2 << 8 | t3
C4: rd = WriteBack
```

O custo em hardware dessa operação é:
```
C1: 4x Add(8 bits)
C2: 4x Mux(8 bits) # comparador nao precisa pois usa carryout
```

O formato da instrução é:
|31-25|24-20|19-15|14-12|11-7 |6-0  |
|-----|-----|-----|-----|-----|-----|
|funct7| rs2 | rs1 |funct3| rd  |opcode|
|0|vetor entrda 2|vetor entrada 1|100|vetor destino|0001011|