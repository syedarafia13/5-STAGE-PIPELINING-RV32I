/*                 ALU_muxes                    */
module alu_mux(
  input logic [31:0] rdata1,
  input logic [31:0] pc4,
  input logic [31:0] pc_in,
  input logic [31:0] zeros,
  input logic [31:0] rdata2,
  input logic [31:0] imm_mux,
  input logic [1:0] operand_A,
  input logic operand_B,
  output logic [31:0] mux_out_1,
  output logic [31:0] mux_out_2
);
  always_comb begin
    case (operand_A)
     2'b00 : begin
       mux_out_1=rdata1; 
      end
      
     2'b01 : begin
        mux_out_1=pc4;
      end
      
     2'b10 : begin
        mux_out_1=pc_in;
      end
      
     2'b11 : begin
        mux_out_1=zeros;
      end  
    endcase
    
    case (operand_B)
      1'b0 : begin 
        mux_out_2=rdata2;
      end
      
      1'b1 : begin 
        mux_out_2=imm_mux;
      end
    endcase
    
  end
endmodule
