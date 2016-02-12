// (Igneus, 2015) Variable Scope

// Global Variable      scope: every function, every part of the program
// Local Variable       scope: particular, inside that function

#include <stdio.h>

int player1 = 3;        // declared as Global, at top of the program

int sum(int a, int b) {
    return a + b;
}

int main() {  // main function as main stage of the game

    printf("Here starts the main stage of game \n");
    int player1 = 10;
    int player2 = 20;
    int comboScore = 0;

    printf("Value of Player 1 after main stage:%d \n", player1);
    printf("Value of Player 2 after main stage:%d \n", player2);
    comboScore = sum(player1, player2);
    printf("The -Combo Score- after main stage:%d \n", comboScore);

    return 0;
}

