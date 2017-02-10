// (Igneus, 2015) Decision IF-ELSE

/*
    Conditions          should always give answer Yes/No, True/False
                        for C,  non-zero values are True
                                zero is False

    if (condition) {
        statements
    } else {
        statements
    }

*/

#include <stdio.h>

int main() {

    int highScore = 100;

    if (highScore > 60) {
        printf("You crossed the high score of 60. \n");
    } else {
        printf("You played well but missed the high score. \n");
    }

    printf("Game Over \n");

    return 0;

}

