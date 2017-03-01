// (Igneus, 2015) Linear Search in Array

// Topic: Data Structures

#include <stdio.h>

int main() {

    int array[20], find, i, size, occurance = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elements: \n");
    for ( i = 0; i < size; i++ ) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &find);

    for ( i = 0; i < size; i++ ) {
        if ( array[i] == find ) {
          printf("%d is at location %d \n", find, i+1);
          occurance++;
        }
    }

    if (occurance == 0) {
        printf("Value not in the array!");
    } else {
        printf("Your element occurred %d times", occurance);
    } 

}

