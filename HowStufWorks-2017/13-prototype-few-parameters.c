// (HowStuffWorks, 2017) Function Prototypes

#include <stdio.h>

// int add(int, int);

int main() {

    int x = 3, y = 4;
    
    printf("Add %d and %d is %d. \n", x, y, add(x));  //add(x, y));   << WRONG ANSWER!

}

int add(int i, int j) {

    return i + j;

}


