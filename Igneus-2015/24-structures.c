// (Igneus, 2015) Structures

// Simplest possible things in C

#include <stdio.h>
#include <string.h>

struct player {
    char playerName[50];
    char stageLevel[50];
    int score;
};

int main() {

    struct player john;
    struct player jessy;

    strcpy(john.playerName, "John Keller");
    strcpy(john.stageLevel, "Kings Room");
    john.score = 200;

    printf("%s is in %s stage and his score is %d\n",
            john.playerName,
            john.stageLevel,
            john.score);

}

