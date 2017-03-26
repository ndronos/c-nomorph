// (HowStuffWorks, 2017) More on Arrays Variable Types pp. 11

#include <stdio.h>

int main() {

    int a;              // int
    a = 10 / 3;         // 3
    printf("a: %d \n", a); // %d

    float b;            // float
    b = 10 / 3;         // 3.000000
    printf("b: %f \n", b); // %f

    float c;
    c = (float)10 / 3;  // 3.333333
    printf("c: %f \n", c);

    float d;
    d = 10/(float)3;    // 3.333333
    printf("d: %f \n", d);

    float e;
    e = 10 / 3;
    printf("e: %f \n", (float)e); // 3.000000 ???

    float f;
    f = 10 / 3;
    printf("f: %f \n", f); //

}

