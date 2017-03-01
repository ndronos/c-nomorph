// (Igneus, 2015) Highest in Array

#include <stdio.h>

int main() {

    int array[20], max, size, i, place = 1;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d values... \n", size);

    for ( i = 0; i < size; i++ ) {
        scanf("%d", &array[i]);
    }

    max = array[0];

    for ( i = 1; i < size; i++ ) {
        if ( array[i] > max ) {
            max = array[i];
            place = i + 1;
        }
    }

    printf("Max value is %d at position %d \n", max, place);

}

