/*              Data Memory                 */
module memory #(parameter addr_width=8,
                parameter width=32)(
    input logic clk,write_en,
    input logic [addr_width-1:0]  mem_addr,
    input logic [width-1:0] mem_write_data,
    output logic [width-1:0] mem_read_data);
    
  logic[31:0] memory [0:255];
    
  always @(posedge clk) begin
    if (write_en) begin
      memory[mem_addr]<=mem_write_data;
    end
  end
  assign mem_read_data=memory[mem_addr];
endmodule
