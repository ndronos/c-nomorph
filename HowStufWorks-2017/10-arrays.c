// (HowStuffWorks, 2017) Arrays pp. 10

#include <stdio.h>

int main() {

    int a[5];
    int i;

    for (i=0; i<5; i++) {
        
        a[i]=i;        //a=i;  //initialize all values in the array to 0 //error: array... not assignable
        printf("a[%d] = %d \n", i, a[i]);
    
    }

}

