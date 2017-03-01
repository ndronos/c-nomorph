// (Igneus, 2015) Recursion

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

