//
// Created by Glavak on 9/27/2016.
//

enum opcode
{
    OPCODE_PUSH_VAL = 0x01,
    OPCODE_PUSH_MEM = 0x02,

    OPCODE_POP_MEM = 0x15,
    OPCODE_SEEK_MEM = 0x16,

    OPCODE_ADD = 0x30,
    OPCODE_SUB = 0x31,
    OPCODE_MUL = 0x32,
    OPCODE_DIV = 0x33,

    OPCODE_EQUALS = 0x50,
    OPCODE_NOT_EQUALS = 0x51,

    OPCODE_GREATER = 0x52,
    OPCODE_LESS = 0x53,

    OPCODE_IF = 0x80,
    OPCODE_GOTO = 0x81,

    OPCODE_WRITE = 0xA0,
    OPCODE_EXIT = 0xA1,
    OPCODE_READ = 0xA2
};