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

    int rating = 3;

    switch (rating) {

      case 5:
          printf("This was a great course!! \n");
          break;

      case 4:
          printf("You gave the 4 rating! \n");
          break;

      case 3:
          printf("3 rating? \n");
          break;

      case 2:
          printf("2... \n");

      default:
          break;

    }


    return 0;
}

