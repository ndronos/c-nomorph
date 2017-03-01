// (Igneus, 2015) Macros in C

// Predefine sort of funtions
// Not a lot, just 6 of them, every macros starts/ends double undescores: __
// Uses: adm server, file handling

#include <stdio.h>

int main() {

    printf("%s \n", __FILE__);
    printf("%s \n", __DATE__);
    printf("%s \n", __TIME__);
    printf("%d \n", __LINE__);
    printf("%d \n", __STDC__);  //Always return 1, if compiled with C standards

}

