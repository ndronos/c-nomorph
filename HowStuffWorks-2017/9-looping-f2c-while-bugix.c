// (HowStuffWorks, 2017) Looping: A Real Example pp. 9

// if you want your values more accurate, use floating point values instead 
// program works if ending value: 100,if 200 prints 98.6 too many times     // problem doesn't exist!!!

#include <stdio.h>

int main() {

    int a, b;
    a =0;
    
    b = -1;           // b as in bullshit... 
    double h = 98.6;  // human normal temperature

    while (a <= 100) {    // 200) {

        if ( (a > h) && (b < h) ) {

          printf("%6.2f degrees F = %6.2f degrees C \n", h*1.0, (h - 32.0) * 5.0 / 9.0 ); // `a` solved 

        } else {

          printf("%6.2f degrees F = %6.2f degrees C \n", a*1.0, (a - 32.0) * 5.0 / 9.0 ); // `a` solved 
      //  printf("%6.2f degrees F = %6.2f degrees C \n", a,     (a - 32.0) * 5.0 / 9.0 ); // `a` problem 
      //  printf("%4d   degrees F = %4d   degrees C \n", a, (a - 32  ) * 5/9   );

        }
        a = a + 10;

    }

    return 0;

}


