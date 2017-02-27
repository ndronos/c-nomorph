// (Igneus, 2015) Continue Keyword

//  continue      Skip one step of the block
//  keyword

#include <stdio.h>

int main() {

    int value = 5;

    do {
 
    //  if (value == 11) continue;                // condition check  // but get infinite loop
        if (value == 11) { value++; continue; }   // condition check  // get right value

        printf("%d  ", value);

        value++;

    } while (value <= 55);




    return 0;

}

