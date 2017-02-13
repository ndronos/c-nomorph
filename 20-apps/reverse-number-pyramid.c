// (Igneus, 2015) Reverse Number Pyramid

#include <stdio.h>

int main() {

    int number = 1;
    printf("Enter Reverse Number for Pyramid: ");
    scanf("%d", &number);


    for(int row = number; row > 0; row--) {
        
        for(int line = 1; line <= row; line++) {

        printf("%d ", line);  //row);

        }
       
      //printf("%d ", row);
        printf("\n");
    }



    return 0;
}

