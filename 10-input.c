// (Igneus, 2005) Input, Read Number

#include <stdio.h>

int main() {

    int value1, value2, sum;

    printf("\n Enter the value #1: ");
    scanf("%d", &value1);


    printf("\n Enter the value #2: ");
    scanf("%d", &value2);


    sum = value1 + value2;

    printf("\n The sum is: %d \n\n", sum);


    getchar();    //on Windows, keep CLI window open

    return 0;    

}

