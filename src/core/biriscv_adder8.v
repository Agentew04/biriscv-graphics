module biriscv_adder8 (
    input  [7:0] A,     // Operando A
    input  [7:0] B,     // Operando B
    input        Ci,    // Carry-in
    output [7:0] S,     // Soma
    output       Co     // Carry-out
);

    assign {Co, S} = {1'b0, A} + {1'b0, B} + Ci;
    
endmodule
