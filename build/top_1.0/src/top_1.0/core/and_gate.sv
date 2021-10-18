/*                branch_and_gate                 */
module and_gate (
  input logic [31:0] pc_branch,
  input logic [31:0] sb_add,
  input logic op_branch,
  input logic B_alu_true,
  output logic [31:0] B_add
  
);
  logic Y_sel;
  assign Y_sel= op_branch & B_alu_true;
  
  always_comb begin
    case (Y_sel) 
    1'b0 : begin
      B_add = pc_branch;
    end
      1'b1 : begin
      B_add = sb_add;
    end
      
    default : ;
    endcase
  end  
endmodule
