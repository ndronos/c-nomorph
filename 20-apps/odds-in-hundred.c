// (Igneus, 2015) Odds in Hundred

#include <stdio.h>

int main() {


    for(int oddy = 1; oddy <= 100; oddy += 2) {

        printf("%d  ", oddy);

    }


    printf("\n");

    // even
    for(int even = 0; even <= 100; even += 2) {

        printf("%d  ", even);
    }


    return 0;
}

