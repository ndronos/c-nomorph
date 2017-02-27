// (Igneus, 2015) Type Casting

/*  Bigger box
    to small box

    long  double
          double
          float
  unsigned long long
      long long
  unsigned long
           long
  unsigned int
           int
*/


#include <stdio.h>

int main() {

    int value1 = 8;
    int value2 = 7;

    double result;

    //  result = value1 / value2;     // 1.000000 wrong

    result = (double)value1 / value2; // 1.142857 with type casting   

    printf("%f \n", result);
   


    return 0;
}

