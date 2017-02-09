// (Igneus, 2015) Constants

/*
  Constants     declare as much as possible
                reducing dependencies

  Two ways      using `#define`, simpler to do, in CAPS and no `=` sign
  to declare    using `const` keyword

*/


#include <stdio.h>


#define LIFE 5
#define BLOOD 3


int main() {
 
    int value = LIFE * BLOOD;

    printf("%d \n", value);

    return 0;
}

