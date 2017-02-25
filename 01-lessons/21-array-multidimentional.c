//  (Igneus, 2015) Advance Part in Array
//
//  Array Multidimentionala [rows][elements]
//

#include <stdio.h>

int main() {

    int salary[3][4] = {
        {2, 3, 5, 8},
        {8, 5, 6, 9},
        {1, 5, 8, 6}
    };

    for(int i = 0; i < 3; i++) {         // monitoring rows

      for (int j = 0; j < 4; j++) {      // monitoring elements

          printf("salary[%d][%d]: %d\n", i, j, salary[i][j]);

      }

    }

}

