// (Klemens, 2015) Appendix A: C 101 pp. 354

#include <stdio.h>

int main(){

    int x=100;                                    printf("%d \n", x);    

    x++;  /*increment x. Evaluates to x.  */      printf("%d \n", x);    
    ++x;  /*increment x. Evaluates to x+1.*/      printf("%d \n", x);

    x--;  /*decrement x. Evaluates to x   */      printf("%d \n", x);
    --x;  /*decrement x. Evaluates to x-1.*/      printf("%d \n", x);


    x+=3; /*add 3 to x.*/                         printf("%d \n", x);
    x-=7; /*subtract 7 from x.*/                  printf("%d \n", x);
    x*=2; /*multiply x by 2.*/                    printf("%d \n", x);
    x/=2; /*divide x by 2.*/                      printf("%d \n", x);
    x%=2; /*replace x with modulo.*/              printf("%d \n", x);

    printf("\n\n");

    int y=10; printf("%d \n", y);
              printf("%d \n", y++);
              printf("%d \n", y);
              printf("%d \n", y--);
              printf("%d \n", y);

    printf("\n\n");

    int w=10; printf("\t%d \n", w);
              printf("++%d \t", ++w); printf("%d \n", w);
              printf("--%d \t", --w); printf("%d \n", w);




}
