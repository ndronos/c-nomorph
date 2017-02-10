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

    int rating = 5;

    switch (rating) {

      case 5:
          printf("This was a great course!! \n");
          break;

      default:
          break;

    }


    return 0;
}

