// (Igneus, 2015) For Loop

/*
    most famous loop in computer industry/history
    does all things in compact matter
    found very often, simplest one

    for (initialization; condition; increment) {
        statements
    }
*/

#include <stdio.h>

int main() {

    for (int value = 5; value <= 55; value++) {     // New Standard: declare/initialize at same time

        printf("%d  ", value);

    }


    printf("\n --- \n");


    for (int value = 55; value >= 5; value--) { 

        printf("%d  ", value);

    }



    return 0;

}

