// (HowStuffWorks, 2017) Arrays pp. 10

#include <stdio.h>

int main() {

    int a[5];
    int i;

    for (i=0; i<5; i++) {
        
        a=i; 
        printf("a[%d] = %d \n", i, a[i]);
    
    }

}

