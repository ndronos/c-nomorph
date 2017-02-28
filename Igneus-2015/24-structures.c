// (Igneus, 2015) Structures

// Structure: advanced array; advanced (multiple datatypes/many type of values) array (one type values)
// Simplest possible things in C
// Future: main reason gives such hability (inspired C++ Python)

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

