// (HowStuffWorks, 2017) More on Arrays Variable Types pp. 11

#include <stdio.h>

int main() {

    int a;              // int
    a = 10 / 3;         // 3
    printf("%d \n", a); // %d

    float b;            // float
    b = 10 / 3;         // 3.000000
    printf("%f \n", b); // %f

    int c;
    c = (float)10 / 3;  // 3 ????
    printf("%d \n", c);

    int d;
    d = 10/(float)3;    //3 ?????
    printf("%f \n", d);


}

