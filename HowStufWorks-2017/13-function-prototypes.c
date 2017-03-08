// (HowStuffWorks, 2017) Function Prototypes

#include <stdio.h>


int main() {

    int x = 3, y = 4;
    
    printf("Factorial of %d is %d. \n", x, factorial(x));
    
    printf("Add %d and %d is %d. \n", x, y, add(x, y));

}


int factorial(int i) {

    int j, k;

    j = 1;

    for (k = 2; k <= i; k++)
        j = j * k;

    return j;

}

int add(int i, int j) {

    return i + j;

}


