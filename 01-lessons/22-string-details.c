//  (Igneus, 2015)  Details About Strings

//  C is very sensitive about declarations

//  `string` is an array of characters
//            char this[10] = "THIS" ... "%s",this

//  string comes with additional functionality
#include <string.h>
#include <stdio.h>

int main() {

    char player1 = 'w';       // = "w"; //error
    printf("%c \n", player1);

    char player2[10] = "Hello";   //  player2 = "Hello"; //error    //"Hello\0"
    printf("%s \n", player2);

    char player3[10] = {'H', 'E', 'L', 'L', 'O', '\0'};   // Old way, before C99
    printf("%s \n", player3);

    char combo[20];
    strcpy(combo, player3);
    printf("%s \n", combo);


    return 0;

}

