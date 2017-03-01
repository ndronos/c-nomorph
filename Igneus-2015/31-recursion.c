// (Igneus, 2015) Recursion

// Recursion means repetition     // Allow a function be called inside the same function
// Factorial of n is n*n-1*n-2*...

#include <stdio.h>

int factorial(int i){

    if (i <= 1) {
        return 1;
    }

    return i * factorial(i-1);
}

int main() {

    int f = 7;

    printf("The value of factorial of %d is %d \n", f, factorial(f));

}

