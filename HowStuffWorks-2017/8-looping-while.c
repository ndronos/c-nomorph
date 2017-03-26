// (HowStuffWorks) Branching and Looping pp. 8

#include <stdio.h>

int main() {

    int a, b;

    printf("Starts: ");
    scanf("%d", &a);
    printf("Ends: ");
    scanf("%d", &b);

    while (a <= b) {  printf("%d ",a), a++;  }
    //             {
    //                printf("%d ",a);
    //                a++;
    //             }
    printf("\n");

    return 0;

}

