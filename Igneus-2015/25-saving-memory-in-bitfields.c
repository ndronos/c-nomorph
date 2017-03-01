// (Ingneus, 2015) Saving Memory in Bitfields

// in C you have to care anything and everything

#include <stdio.h>

struct {
    unsigned int lowMemory;
    unsigned int highMemory;
} mem1;

int main() {

    printf("The memory size occupied by mem1 is: %lu bytes \n", sizeof(mem1));

    return 0;
}

