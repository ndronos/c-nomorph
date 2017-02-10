// (Igneus, 2015) Input, Even or Odd

#include <stdio.h>

int main() {

    int value1, result = 0;

    printf("\n Enter value 1: ");
    scanf("%d", &value1);

    result = value1 % 2;

    if (result == 0) {

        printf("\n The number is EVEN. \n");

    } else {

        printf("\n The number is ODD. \n");

    }


    return 0;

}

