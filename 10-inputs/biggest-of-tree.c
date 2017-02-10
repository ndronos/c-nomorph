// (Igneus, 2005) Input, Biigest of Three

//  Good practice         Initialze values                 
//                        some may contain `garbage values`, unexpected values

#include <stdio.h>

int main() {

    int value1, value2, value3, big = 0;   // initialized as zero

    printf("\n Enter the value #1: ");
    scanf("%d", &value1);


    printf("\n Enter the value #2: ");
    scanf("%d", &value2);


    printf("\n Enter the value #3: ");
    scanf("%d", &value3);


/*
    sum = value1 + value2;

    printf("\n The sum is: %d \n\n", sum);
*/

    getchar();    //on Windows, keep CLI window open

    return 0;    

}

