// (Klemens, 2015) Appendix A: C 101 pp. 356-357

#include <stdio.h>

int main(){

    if (6 == 9)
        printf("Six is nine.\n");

    int x=3;
    if (x == 1)
        printf("I found x; and it is one.\n");
    else if (x == 2)
        printf("x is definitely two.\n");
    else
        printf("x is neither one nor two.\n");

}

