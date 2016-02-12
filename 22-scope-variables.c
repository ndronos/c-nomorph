// (Igneus, 2015) Variable Scope

#include <stdio.h>



int main() {

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

