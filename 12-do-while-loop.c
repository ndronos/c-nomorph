// (Ingeus, 2015) Do While Loop

/*
    do {                      Execute at least once
      statements
    } while (condition)       then check the condition
*/

#include <stdio.h>

int main() {

    int value = 5;

    do {

        printf("%d  ", value);
        value++;

    } while (value <= 55);



    return 0;
}

