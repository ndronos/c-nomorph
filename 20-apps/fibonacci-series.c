// (Igneus, 2015) Fibonacci Series

//  series of numbers... the next number is found by adding up the two numbers before it.
//  0 1 1 2 3 5 8 13 21 34...

#include <stdio.h>

int main() {

    int digit1 = 0,
        digit2 = 1,
        calculated = 0,
        limit;

    printf("%d, ", digit1);
    printf("%d, ", digit2);

    for (limit = 1; limit <= 20; limit++) {

        calculated = digit1 + digit2;
        printf("%d, ", calculated);

        digit1 = digit2;
        digit2 = calculated;
    
    }   


    return 0;
}

