/*              Immediate Generation                     */
module Immediate_Generation(
  input logic [24:0] instr,
  input logic [31:0] pc,
  input logic [1:0] imm_sel,
  output logic [31:0] SB_Type,
  output logic [31:0] UJ_Type,
  output logic [31:0] imm);
  
  logic [31:0] ax;
  logic [31:0] ay;
  logic [31:0] I_Type;
  logic [31:0] S_Type;
  logic [31:0] U_Type;
  
  always_comb begin
    case(imm_sel) 
      2'b10: begin
  // I-TYPE
  I_Type [11:0] = instr[24:13];
  I_Type [31:12] = 20'd0;
  imm=I_Type;
      end
  // S-TYPE
      2'b00: begin
  S_Type [11:5] = instr[24:18];
  S_Type [4:0] = instr[4:0];
  S_Type [31:12] = 20'd0;
  imm=S_Type;
      end
 // U-TYPE
      2'b01: begin
  U_Type[19:0] = instr [24:5];                
  U_Type[31:20] = 12'd0;
  U_Type [31:0] =  U_Type  << 32'd12;
  imm=U_Type; 
      end
      default:;
    endcase
  // SB-TYPE
   ax [12] = instr [24];
   ax [11] = instr [0];
   ax [10:5] = instr [23:18];
   ax [4:1] = instr [4:1];
   ax [0] = 1'b0;
   ax [31:13] = 19'd0;
  assign SB_Type = ax + pc;
  
  // UJ-TYPE
   ay [20] = instr [24];
   ay [19:12] = instr [12:5];
   ay [11] = instr [13];
   ay [10:1] = instr [23:14];
   ay [0] = 1'b0;
   ay [31:21] = 11'd0;
  assign UJ_Type = ay + pc;
  end
endmodule
