#ifndef _ADDER_H
#define _ADDER_H
#define INPUTDATA __attribute__((section(".inputdata")))
#define OUTPUTDATA __attribute__((section(".outputdata")))
#define COUNT 10
volatile INPUTDATA int Number[COUNT] = {0x1, 0x10, 0x100, 0x1000, 0x1, 0x10, 0x100, 0x1000, 0x1, 0x10};
#endif
