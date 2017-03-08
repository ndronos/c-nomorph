// (HowStuffWorks, 2017) Functions

#include <stdio.h>

int factorial(int i) {

    int j, k;

    j = 1;

    for (k = 2; k <= i; k++)
        j = j * k;

    return j;

}


int main() {

    int x = 3;

    printf("Factorial of %d is %d. \n", x, factorial(x));

}

