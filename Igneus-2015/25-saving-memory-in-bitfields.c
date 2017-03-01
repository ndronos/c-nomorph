// (Ingneus, 2015) Saving Memory in Bitfields

// in C you have to care anything and everything
// in return, C allows you to control the memory 

#include <stdio.h>

struct {
    unsigned int lowMemory;
    unsigned int highMemory;
} mem1;

struct {
    unsigned int lowMemory  : 1;
    unsigned int highMemory : 1;
} mem2;

int main() {

    printf("The memory size occupied by mem1 is: %lu bytes \n", sizeof(mem1));

    printf("The memory size occupied by mem2 is: %lu bytes \n", sizeof(mem2));

}

//  unsigned int highMemory;  // unsigned int is 4 bytes or 32 bits
//  unsigned int highMemory : 1        // out of 4 bytes or 32 bits, only use 1 bit

