// (Klemens, 2015) Appendix A: C 101 pp. 354-354

#include <stdio.h>

int main(){

    int x=100;                                  printf("\n");

    printf("%d \t\t\t\t",   x);                 printf("  x              \n");
    printf("%d \t\t\t\t",  !x);                 printf(" !x              \n");
    printf("%d \t\t\t\t", !!x);                 printf("!!x              \n");

    int y=900;                                  printf("\n");

    printf("%d \t\t\t\t",   y);                 printf("       y         \n");

    printf("%d \t\t\t\t",   x == y);            printf("  x == y         \n");
    printf("%d \t\t\t\t",   x != y);            printf("  x != y         \n");
    printf("%d \t\t\t\t",   x <  y);            printf("  x <  y         \n");
    printf("%d \t\t\t\t",   x <= y);            printf("  x <= y         \n");
    printf("%d \t\t\t\t",   x || y);            printf("  x || y         \n");
    printf("%d \t\t\t\t",   x && y);            printf("  x && y         \n");

    int z=2000;                                 printf("\n");

    printf("%d \t\t\t\t",   z);                 printf("                z   \n");

    printf("%d \t\t\t\t",   x > y || y >= z );  printf("  x > y || y >= z   \n");

                                                printf("\n");


}

