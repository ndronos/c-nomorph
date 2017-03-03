// (HowStuffWorks) Branching and Looping pp. 8

#include <stdio.h>

int main() {

    int a, b;

//  printf("Starts: ");
//  scanf("%d", &a);
//  printf("Ends: ");
//  scanf("%d", &b);

for ( a=1, b=9;     a <= b;    printf("%d ",a), a++  ) { }  // ... has empty body
    //       while (a <= b) {  printf("%d ",a), a++;  }
    //                      {
    //                          printf("%d ",a);
    //                                          a++;
    //                      }
    printf("\n");

    return 0;

}

