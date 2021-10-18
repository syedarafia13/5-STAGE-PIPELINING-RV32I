/*             Data_Memory_Mux                 */
module mux2_1(
  input logic [31:0] alu_in,
  input logic [31:0] d_in,
  input logic data_sel,
  output logic [31:0] out
);
  always_comb begin 
    case (data_sel) 
      1'b0: begin 
        out=alu_in;
      end
      1'b1: begin 
        out=d_in;
      end
      default : out=32'd0;
    endcase
  end
endmodule
