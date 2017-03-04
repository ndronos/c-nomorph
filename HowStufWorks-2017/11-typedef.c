// (HowStuffWorks, 2017) Typedef

#include <stdio.h>

#define TRUE    1
#define FALSE   0
typedef int boolean;

int main() {

    boolean a, b;
    a = TRUE;
    b = FALSE;
    
    printf(" a is %d,\n b is %d. \n", a, b);

}

