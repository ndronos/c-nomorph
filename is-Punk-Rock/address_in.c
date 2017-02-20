// (Klemens, 2015) Appendix A: C 101

#include <stdlib.h>
#include <stdio.h>

void double_in(int *in){

    *in *= 2;

}

int main(){

//  int x[1];   //declare a one-item array, for demonstration purposes
//  printf("%i \n", *x); // tests x
//
//  *x = 10;
//  printf("%i \n", *x); // tests x
    int x = 10;
    printf("%i \n", x);

//  double_in(x);
//  printf("x now points to %i. \n", *x);
    double_in(&x);
    printf("x is now %i. \n", x);

}

// The `double_in` function doesn't change `in`,
// but it does double the value pointed to by `in`, `*in`.
// Therefore, the value `x`points to has been doubled by the `double_in` function.

