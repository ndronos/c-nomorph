// (Igneus, 2015) Number Pyramid

#include <stdio.h>

int main() {

int size = 0;
printf("Enter SIZE of Number Pyramid: ");
scanf("%d", &size);

for(int row=1; row <=size; row++) {          // line

    for(int py=1; py <= row; py++) {      // row
      
        printf("%d", py);
    }

    printf("\n");

}
    return 0;
}

