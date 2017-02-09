// (Igneus, 2015) Constants

/*
  Constants     declare as much as possible
                reducing dependencies

  Two ways      using `#define`, simpler to do, in CAPS and no `=` sign
  to declare    using `const` keyword, easier

*/


#include <stdio.h>

/*
#define
*/
#define LIFE 5
#define BLOOD 3


int main() {
 
    int value = LIFE * BLOOD;

    printf("%d \n", value);

/*
    const
*/
    const int LIF3 = 10;
    const int BL00D = 3;

    int v4lue = LIF3 * BL00D;    

    printf("%d \n", v4lue);

    return 0;

}

