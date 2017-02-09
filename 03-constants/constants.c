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

//  error: expression is not assignable
//  LIFE = LIFE + 1

    return 0;

}


/*

$ gcc constants.c 

constants.c: In function ‘main’:
constants.c:39:10: error: lvalue required as left operand of assignment
     LIFE = LIFE + 1
          ^
constants.c:42:5: error: expected ‘;’ before ‘return’
     return 0;
     ^
$ clang constants.c 
constants.c:39:10: error: expression is not assignable
    LIFE = LIFE + 1
    ~~~~ ^
1 error generated.

*/

