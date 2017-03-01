//(Igneus, 2015) Upper to Lowercase Converter

#include <stdio.h>

int main() {

    char C, c;

    printf("Enter a upper case letter: ");

    C = getchar();
    c = C + 32;
    //  C.toUpperCase

    printf("The lower case letter is ");
    putchar(c);
    printf("\n");

}

