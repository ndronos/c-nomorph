// (Igneus, 2015) Sum of Three Digits

#include <stdio.h>

int main() {

    int number, digit1, digit2, digit3, sum  = 0;

    printf("Enter a three digit number: ");
    scanf("%d", &number);

    digit3 = number / 100;
    digit2 = (number % 100) / 10;
    digit1 = number % 10;


    printf("%d \n", digit3);
    printf("%d \n", digit2);
    printf("%d \n", digit1);



    return 0;
}

