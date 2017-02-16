//

#include <stdio.h>

int main(){

    double pi= 3.14159265;                              //POSIX defines the constant M_PI in math.h, by the way.
    int count= 10, count2, count3=30;                   //count2 is unitialized // warning: ... [-Wunitialized]

    printf("%g times %i = %g.\n", pi, count, pi*count);

    printf("%g times %i = %g.\n", pi, count2, pi*count2); 

    printf("%g times %i = %g.\n", pi, count3, pi*count3); 

}

