// (HowStuffWorks, 2017) Looping: A Real Example

#include <stdio.h>

int main() {

    int a;
    a =0;

    while (a <= 100) {

        printf("%4d degrees F = %4d degrees C \n", a, (a - 32) * 5/9 );
        a = a + 10;

    }

    return 0;

}


