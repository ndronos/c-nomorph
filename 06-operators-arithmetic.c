// (Igneus, 2015) Artithmetic Operations

#include <stdio.h>

int main() {

    int life = 11;
    int bonus = 2;
    int factor;

    factor = life + bonus;  printf("Value of factor is: %d \n", factor);

    factor = life - bonus;  printf("Value of factor is: %d \n", factor);

    factor = life * bonus;  printf("Value of factor is: %d \n", factor);

    factor = life / bonus;  printf("Value of factor is: %d \n", factor);

    factor = life % bonus;  printf("Value of factor is: %d \n", factor);  // modulus, remainder:w


    life = life + 1;    printf("Value of life is: %d \n", life);



    return 0;

}

