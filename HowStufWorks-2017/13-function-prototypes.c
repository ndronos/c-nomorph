// (HowStuffWorks, 2017) Functions

#include <stdio.h>

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

/* Old Style
int old(int i, int j)
    int i;
    int j;
{
    return i+j;
}
*/

int main() {

    int x = 3, y = 4;
    
    printf("Factorial of %d is %d. \n", x, factorial(x));
    
    printf("Add %d and %d is %d. \n", x, y, add(x, y));

}

