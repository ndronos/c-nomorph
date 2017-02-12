// (Igneus, 2015) Value Call vs Reference Call

#include <stdio.h>


void swap(int *v1, int *v2) {     // *pointer declaration  // void / int : non-void... should return value

    int tmp = *v1;
    *v1 = *v2;
    *v2 = tmp;

    return;
}


int main() {

    int value1 = 5;
    int value2 = 11;

    printf("Value 1 is %d \b\n", value1);
    printf("Value 2 is %d \b\n", value2);


    swap(&value1, &value2);                     // new function

    printf("Swap value 1: %d \n", value1);
    printf("Swap value 2: %d \n", value2);



    return 0;
}

