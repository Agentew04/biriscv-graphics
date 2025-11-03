module biriscv_adder32 (
    input  [31:0] A,    // Operando A
    input  [31:0] B,    // Operando B
    input        Ci,    // Carry-in
    input        Cprop,  // Carry propagate

    output [31:0] S,     // Soma
    output       Co0,
    output       Co1,     
    output       Co2,     
    output       Co3   // Carry-out  
);

    biriscv_adder8
    u_adder8_0
    (
        .A   (A[7:0]    ),
        .B   (B[7:0]    ),
        .Ci  (Ci        ),
        .S   (S[7:0]    ),
        .Co  (Co0       )
    );

    biriscv_adder8
    u_adder8_1
    (
        .A   (A[15:8]   ),
        .B   (B[15:8]   ),
        .Ci  (Cprop ? Co0 : Ci),
        .S   (S[15:8]   ),
        .Co  (Co1       )
    );

    biriscv_adder8
    u_adder8_2
    (
        .A   (A[23:16]  ),
        .B   (B[23:16]  ),
        .Ci  (Cprop ? Co1 : Ci),
        .S   (S[23:16]  ),
        .Co  (Co2       )
    );

    biriscv_adder8
    u_adder8_3
    (
        .A   (A[31:24]  ),
        .B   (B[31:24]  ),
        .Ci  (Cprop ? Co2 : Ci),
        .S   (S[31:24]  ),
        .Co  (Co3       )
    );

endmodule
