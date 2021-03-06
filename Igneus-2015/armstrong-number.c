// (Igneus, 2015) Armstrong Number

// a number such that the sum of its digits raised to the third power is equal to the number itself.
// 3**3 + 7**3 + 1**3 = 371

#include <stdio.h>
#include <math.h>     // requires compilation with `-lm` option to link library

int main() {

    int number, digit1, digit2, digit3, army = 0;

    printf("Enter a three digit Armstrong number: ");
    scanf("%d", &number);

    digit3 =  number / 100;
    digit2 = (number % 100) / 10;
    digit1 =  number % 10;


    printf("%d \n", digit3);
    printf("%d \n", digit2);
    printf("%d \n", digit1);


    army =  pow(digit3, 3) + pow(digit2, 3) + pow(digit1, 1); // requires math library
            // digit3^3 // ^ is bitwise operator not power, pow();
            // digit3*digit3*digit3;
    printf("%d ", army);
    if (number == army) printf("The number is Armstrong.\n");
    else                printf("NOT Armstrong number.\n");
    
    
    return 0;
}

