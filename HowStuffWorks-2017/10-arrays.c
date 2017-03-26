// (HowStuffWorks, 2017) Arrays pp. 10-11

#include <stdio.h>

// Note:
int   a[10];        // array of integers
char  s[10];        // array of characters, a C string
float f[20];        // array of reals
struct rec r[50];   // array of records


int main() {

    int a[5];
    int i;

    for (i=0; i<5; i++) {
        
        a[i]=i;        //a=i;  //initialize all values in the array to 0 //error: array... not assignable
        printf("a[%d] = %d \n", i, a[i]);
    
    }

}

