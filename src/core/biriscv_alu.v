//-----------------------------------------------------------------
//                         biRISC-V CPU
//                            V0.8.1
//                     Ultra-Embedded.com
//                     Copyright 2019-2020
//
//                   admin@ultra-embedded.com
//
//                     License: Apache 2.0
//-----------------------------------------------------------------
// Copyright 2020 Ultra-Embedded.com
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//-----------------------------------------------------------------
module biriscv_alu
(
    // Inputs
     input  [  3:0]  alu_op_i
    ,input  [ 31:0]  alu_a_i
    ,input  [ 31:0]  alu_b_i
    // eh o campo funct7, contem info das instrucoes pack e unpack
    ,input [6:0] alu_cg_info

    // Outputs
    ,output [ 31:0]  alu_p_o
);

//-----------------------------------------------------------------
// Includes
//-----------------------------------------------------------------
`include "biriscv_defs.v"

//-----------------------------------------------------------------
// Registers
//-----------------------------------------------------------------
reg [31:0]      result_r;

reg [31:16]     shift_right_fill_r;
reg [31:0]      shift_right_1_r;
reg [31:0]      shift_right_2_r;
reg [31:0]      shift_right_4_r;
reg [31:0]      shift_right_8_r;

reg [31:0]      shift_left_1_r;
reg [31:0]      shift_left_2_r;
reg [31:0]      shift_left_4_r;
reg [31:0]      shift_left_8_r;

wire [31:0]     sub_res_w = alu_a_i - alu_b_i;
// -------------------------------------------------
// ADDER32
// -------------------------------------------------
reg [31:0] addsub_B;
reg        addsub_Ci;
reg Carry_propagate;

wire [31:0] addsub_S;
wire Co0_feedback, Co1_feedback, Co2_feedback, Co3_feedback;

wire unused0;
wire unused1;
wire unused2;
wire unused3;
biriscv_adder32 u_adder32 (
    .A     (alu_a_i),
    .B     (addsub_B),
    .Ci    (addsub_Ci),
    .Cprop (Carry_propagate),
    .S     (addsub_S),
    .Co0   (unused0),
    .Co1   (unused1),
    .Co2   (unused2),
    .Co3   (unused3)
);

// pack
wire pack_comp_x;
assign pack_comp_x = alu_cg_info[3];
wire pack_comp_y;
assign pack_comp_y = alu_cg_info[2];
wire pack_comp_z;
assign pack_comp_z = alu_cg_info[1];
wire pack_comp_w;
assign pack_comp_w = alu_cg_info[0];

// unpack
wire unpack_isSigned;
assign unpack_isSigned = alu_cg_info[6];
wire [3:0] unpack_comp;
assign unpack_comp = alu_cg_info[3:0];

//-----------------------------------------------------------------
// ALU
//-----------------------------------------------------------------
always @ (alu_op_i or alu_a_i or alu_b_i or sub_res_w or addsub_S)
begin
    shift_right_fill_r = 16'b0;
    shift_right_1_r = 32'b0;
    shift_right_2_r = 32'b0;
    shift_right_4_r = 32'b0;
    shift_right_8_r = 32'b0;

    shift_left_1_r = 32'b0;
    shift_left_2_r = 32'b0;
    shift_left_4_r = 32'b0;
    shift_left_8_r = 32'b0;

    case (alu_op_i)
       //----------------------------------------------
       // Shift Left
       //----------------------------------------------   
       `ALU_SHIFTL:
       begin
            if (alu_b_i[0] == 1'b1)
                shift_left_1_r = {alu_a_i[30:0],1'b0};
            else
                shift_left_1_r = alu_a_i;

            if (alu_b_i[1] == 1'b1)
                shift_left_2_r = {shift_left_1_r[29:0],2'b00};
            else
                shift_left_2_r = shift_left_1_r;

            if (alu_b_i[2] == 1'b1)
                shift_left_4_r = {shift_left_2_r[27:0],4'b0000};
            else
                shift_left_4_r = shift_left_2_r;

            if (alu_b_i[3] == 1'b1)
                shift_left_8_r = {shift_left_4_r[23:0],8'b00000000};
            else
                shift_left_8_r = shift_left_4_r;

            if (alu_b_i[4] == 1'b1)
                result_r = {shift_left_8_r[15:0],16'b0000000000000000};
            else
                result_r = shift_left_8_r;
       end
       //----------------------------------------------
       // Shift Right
       //----------------------------------------------
       `ALU_SHIFTR, `ALU_SHIFTR_ARITH:
       begin
            // Arithmetic shift? Fill with 1's if MSB set
            if (alu_a_i[31] == 1'b1 && alu_op_i == `ALU_SHIFTR_ARITH)
                shift_right_fill_r = 16'b1111111111111111;
            else
                shift_right_fill_r = 16'b0000000000000000;

            if (alu_b_i[0] == 1'b1)
                shift_right_1_r = {shift_right_fill_r[31], alu_a_i[31:1]};
            else
                shift_right_1_r = alu_a_i;

            if (alu_b_i[1] == 1'b1)
                shift_right_2_r = {shift_right_fill_r[31:30], shift_right_1_r[31:2]};
            else
                shift_right_2_r = shift_right_1_r;

            if (alu_b_i[2] == 1'b1)
                shift_right_4_r = {shift_right_fill_r[31:28], shift_right_2_r[31:4]};
            else
                shift_right_4_r = shift_right_2_r;

            if (alu_b_i[3] == 1'b1)
                shift_right_8_r = {shift_right_fill_r[31:24], shift_right_4_r[31:8]};
            else
                shift_right_8_r = shift_right_4_r;

            if (alu_b_i[4] == 1'b1)
                result_r = {shift_right_fill_r[31:16], shift_right_8_r[31:16]};
            else
                result_r = shift_right_8_r;
       end
       //----------------------------------------------
       // Arithmetic
       //----------------------------------------------
       `ALU_ADD:
       begin
        addsub_B  = alu_b_i;
        addsub_Ci = 1'b0;
        result_r  = addsub_S;
        Carry_propagate = 1'b1;
       end
       `ALU_SUB:
       begin
        addsub_B  = ~alu_b_i;
        addsub_Ci = 1'b1;
        Carry_propagate = 1'b1;
        result_r  = addsub_S;
       end
       `ALU_ADD_BYTES:
       begin
        addsub_B  = alu_b_i;
        Carry_propagate = 1'b0;
        addsub_Ci = 1'b0;
        result_r  = addsub_S;
       end
/*       `ALU_PACK:
       begin
        // TODO
       end
       */
       //----------------------------------------------
       // Logical
       //----------------------------------------------
       `ALU_AND:
       begin
            result_r      = (alu_a_i & alu_b_i);
       end
       `ALU_OR:
       begin
            result_r      = (alu_a_i | alu_b_i);
       end
       `ALU_XOR:
       begin
            result_r      = (alu_a_i ^ alu_b_i);
       end
       //----------------------------------------------
       // Comparision
       //----------------------------------------------
       `ALU_LESS_THAN:
       begin
            result_r      = (alu_a_i < alu_b_i) ? 32'h1 : 32'h0;
       end
       `ALU_LESS_THAN_SIGNED:
       begin
            if (alu_a_i[31] != alu_b_i[31])
                result_r  = alu_a_i[31] ? 32'h1 : 32'h0;
            else
                result_r  = sub_res_w[31] ? 32'h1 : 32'h0;
       end
       `ALU_PACK:
       begin
            // pack eh soh fio.
            result_r = {
                (pack_comp_x == 1'b1 ? alu_a_i[7:0] : 8'b0), // X
                (pack_comp_y == 1'b1 ?
                    (pack_comp_x == 1'b1 ? alu_b_i[7:0] : alu_a_i[7:0])
                    : 8'b0), // Y, RS2 se X senao RS1
                (pack_comp_z == 1'b1 ?
                    (pack_comp_w == 1'b1 ? alu_a_i[7:0] : alu_b_i[7:0])
                    : 8'b0), // Z, RS1 se W, senao RS2
                (pack_comp_w == 1'b1 ? alu_b_i[7:0] : 8'b0)  // W
            };
       end
       `ALU_UNPACK:
       begin
            // unpack, so fio (acho. isso sepa vira um mux)
            case(unpack_comp)
            4'b1000: // X
            begin
                result_r = {
                    ((unpack_isSigned && alu_a_i[31]) ? {24{1'b1}} : 24'b0), // sign
                    alu_a_i[31:24] // componente
                };
            end
            4'b0100: // Y
            begin
                result_r = {
                    (unpack_isSigned && alu_a_i[23]) ? {24{1'b1}} : 24'b0, // sign
                    alu_a_i[23:16] // componente
                };
            end
            4'b0010: // Z
            begin
                result_r = {
                    (unpack_isSigned && alu_a_i[15]) ? {24{1'b1}} : 24'b0, // sign
                    alu_a_i[15:8] // componente
                };
            end
            4'b0001: // W
            begin
                result_r = {
                    (unpack_isSigned && alu_a_i[7]) ? {24{1'b1}} : 24'b0, // sign
                    alu_a_i[7:0] // componente
                };
            end
            endcase

       end
       default:
       begin
            result_r      = alu_a_i;
       end
    endcase
end

assign alu_p_o    = result_r;

endmodule
