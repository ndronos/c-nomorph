// (Igneus, 2015) Break Keyword

//  break         trow the controller out of the block
//  keyword

#include <stdio.h>

int main() {

    int value = 5;

    while (value <= 55) {

        printf("%d", value);

        value++;

        if (value > 15) break;            //

        printf("//");
    }

    printf("-->I am out of the block. \n");


    return 0;

}

