/*             Instruction Memory                   */
module instr_mem(
  input logic EN,
  input logic [11:0] addr,
  output logic [31:0] rd
);
  
  bit [31:0] ROM [4095:0];
  initial begin
    $readmemh("/home/rafia/Desktop/top/instr.mem",ROM);
  end
  always_latch begin
    if (EN == 1) begin
    rd <= ROM[addr];
   end
  end
 
endmodule
