// (Igneus, 2015) Reverse Number Pyramid

#include <stdio.h>

int main() {

    int number = 1;
    printf("Enter Reverse Number for Pyramid: ");
    scanf("%d", &number);


    for(int row = number; row > 0; row--) {
        /*
        for() {


        }
        */
        printf("%d ", row);
        //printf("\n");
    }



    return 0;
}

