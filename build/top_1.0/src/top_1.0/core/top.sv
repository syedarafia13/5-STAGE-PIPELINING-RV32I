/*                     Top Design                  */
module top(
           input logic reset,
           input logic clk,
           output logic [31:0]output1
           );
  
  parameter width=32;
  logic [31:0] pc_reg=32'b11111111111111111111111111111100;
  logic [31:0] inst;
  logic [31:0] pc_4=pc_reg+4;
  logic [1:0] pc_sel;
  logic EN;
  assign EN=~reset;
  logic reg_write1;
  logic branch1;
  logic store1;
  logic load1;
  logic [1:0] op_a1;
  logic op_b1;
  logic [1:0] imm_sel1;
  
  logic [31:0] SB_Type1;
  logic [31:0] SB_Type2;
  logic [31:0] jal1;
  logic [31:0] imm;
  logic [2:0] alu_op1;
                              
  logic [31:0] write_data1;
  logic [31:0] read_data1;
  logic [31:0] read_data2;
           
  logic [31:0] zeros=32'd0;
  logic [31:0] mux_out_1;
  logic [31:0] mux_out_2; 
          
  logic [3:0] alu_control1;
  logic [31:0] out1; 
  logic func71=inst[30];        
  logic branch_out1;       
  
  logic [width-1:0] mem_read_data1;
 
  instr_mem im1(.EN(EN),
                .addr(pc_reg[13:2]),
                .rd(inst)); 
  
  Control_Unit cu(.opcode(inst[6:0]),
                  .reg_write(reg_write1),
                  .branch(branch1),
                  .store(store1),
                  .load(load1),
                  .op_a(op_a1),
                  .op_b(op_b1),
                  .imm_sel(imm_sel1),
                  .next_sel(pc_sel),
                  .alu_op(alu_op1) );
    
 Immediate_Generation ig_inst(.instr(inst[31:7]),
                              .pc(pc_reg),
                              .imm_sel(imm_sel1),
                              .SB_Type(SB_Type1),
                              .UJ_Type(jal1),
                             .imm(imm));   
  
  reg_file rf1(.clk(clk),
               .write_enable(reg_write1),
               .rs1(inst[19:15]),
               .rs2(inst[24:20]),
               .rd(inst[11:7]),
               .write_data(write_data1),
               .readdata1(read_data1),
               .readdata2(read_data2),
               .out(output1));
                    
  ALU_control alu_cntrl1(.ALUOp(alu_op1),
                         .func3(inst[14:12]),
                         .func7(func71),
                         .result(alu_control1));
                              
  alu_mux am(.rdata1(read_data1),
             .pc4(pc_4),
             .pc_in(pc_reg),
             .zeros(zeros),
             .rdata2(read_data2),
             .imm_mux(imm),
             .operand_A(op_a1),
             .operand_B(op_b1),
             .mux_out_1(mux_out_1),
             .mux_out_2(mux_out_2));
  
  
  ALU alu1(.a(mux_out_1),
           .b(mux_out_2),
           .alu_control(alu_control1),
           .out(out1));
  
  memory m1(.clk(clk),
            .write_en(store1),
            .mem_addr(out1[9:2]),
            .mem_write_data(read_data2),
            .mem_read_data(mem_read_data1));
  
  mux2_1 mux2(.alu_in(out1),
              .d_in(mem_read_data1),
              .data_sel(load1),
              .out(write_data1));
  
            
  branches br1(.a(read_data1),
              .b(read_data2),
              .func3(inst[14:12]),
              .branch_out(branch_out1));
  
  and_gate ag(.pc_branch(pc_4),
              .sb_add(SB_Type1),
              .op_branch(branch1),
              .B_alu_true(branch_out1),
              .B_add(SB_Type2));          
  
  always @(posedge clk) begin
    if (reset) pc_reg<=32'b11111111111111111111111111111100;
    else begin
    case (pc_sel)
      2'b00 : begin
        pc_reg<=pc_reg+4;
      end
      
      2'b01 : begin
        pc_reg<=read_data1+imm;
      end
      
       2'b10 : begin
         pc_reg<=jal1;
      end
       
       2'b11 : begin
         pc_reg<=SB_Type2;
      end
      
      default :;
    endcase  
    end
   end
endmodule

