// (Igneus. 2015) Switch Case

/*
    switch (expression) {
      case constant:
          statements
          break:
      default:
          break;
    }

*/

#include <stdio.h>

int main() {

    int rating = 4;

    switch (rating) {

      case 5:
          printf("This was a great course!! \n");
          break;

      case 4:
          printf("You gave the 4 rating! \n");
          break;

      default:
          break;

    }


    return 0;
}

