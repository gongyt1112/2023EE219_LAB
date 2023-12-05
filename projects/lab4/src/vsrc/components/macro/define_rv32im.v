
// -------------------------------------------------
// RISC-32I Instruction OPCODE
// -------------------------------------------------
`define OPCODE_ADD      7'b011_0011
`define FUNCT3_ADD      3'b000
`define FUNCT7_ADD      7'b000_0000

`define OPCODE_ADDI     7'b001_0011
`define FUNCT3_ADDI     3'b000

`define OPCODE_LW       7'b000_0011
`define FUNCT3_LW       3'b010

`define OPCODE_SW       7'b010_0011 
`define FUNCT3_SW       3'b010

`define OPCODE_BNE      7'b110_0011
`define FUNCT3_BNE      3'b001

`define OPCODE_JALR     7'b110_0111
`define FUNCT3_JALR     3'b000

`define OPCODE_JAL      7'b110_1111
`define OPCODE_LUI      7'b011_0111
`define OPCODE_AUIPC    7'b001_0111

`define OPCODE_AND      7'b011_0011
`define FUNCT3_AND      3'b111 
`define FUCNT7_AND      7'b000_0000

`define OPCODE_SLL      7'b011_0011
`define FUNCT3_SLL      3'b001 
`define FUCNT7_SLL      7'b000_0000

`define OPCODE_SLTI     7'b001_0011
`define FUNCT3_SLTI     3'b010

`define OPCODE_BLT      7'b110_0011
`define FUNCT3_BLT      3'b100

// -------------------------------------------------
// RISC-32M Instruction OPCODE
// -------------------------------------------------
`define OPCODE_MUL      7'b011_0011 
`define FUNCT3_MUL      3'b000
`define FUNCT7_MUL      7'b000_0001

