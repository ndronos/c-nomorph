// (Igneus, 2015) Case Converter

#include <stdio.h>

int main() {

    char input, output;

    printf("Enter a letter to case conver it: ");

    input = getchar();

    if ( input >= 65 && input <= 90 ) {

        output = input + 32;

    } else if ( input >= 97 && input <= 122 ) {

        output = input - 32;
    }

    putchar(output);
    printf("\n");
}

