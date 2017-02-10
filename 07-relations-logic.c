// (Igneus, 2015) Relations and Logic

#include <stdio.h>

int main() {

    int life1 = 10;
    int life2 = 10;
/*
    life1 =  life2;     // assingment

    life1 == life2;     // comparison
*/
    life1 != life2;     // ! reverse
/*
...                 :14:11: warning: inequality comparison result unused [-Wunused-comparison]
    life1 != life2;     // ! reverse
    ~~~~~~^~~~~~~~
...                 :14:11: note: use '|=' to turn this inequality comparison into an or-assignment
    life1 != life2;     // ! reverse
          ^~
          |=
1 warning generated.
*/
    printf("%d \n", life1 != life2);
    printf("%d \n", life1 == life2);


//  comparison

    printf("%d \n", life1 <= life2);
    printf("%d \n", life1 >= life2);


//  logic, boolean values, if non-zero

    printf("%d \n", life1 && life2);  // AND  : Even one FALSE, all FALSE
    printf("%d \n", life1 || life2);  // OR   : Even one TRUE, all TRUE




    return 0;

}
