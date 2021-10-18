/*                       ALU                       */
module ALU(
 input logic [31:0] a,  
 input logic [31:0] b,  
 input logic [3:0] alu_control, 
 output logic [31:0] out
 );

 always_comb begin
 case(alu_control)
 4'b0000 : out = a + b;  //add
 4'b0001 : out = a - b;  //sub
 4'b0010 : out = a ^ b;  //xor
 4'b0011 : out = a | b;  //or
 4'b0100 : out = a & b;  //and
 4'b0101 : out = a << b; //sll
 4'b0110 : out = a >> b; //srl
 4'b0111 : out = (a < b) ? 32'd1 : 32'd0;
 4'b1000 : out = ($signed(a) < $signed(a)) ? 32'd1 : 32'd0;
 4'b1001 : out = a >>> b; //sra
 4'b1111 : out = a;
   
 default: out = a + b; 
 endcase
end
endmodule
