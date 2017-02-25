//  (Igneus, 2015) Advance Part in Array
//
//  Array Multidimentionala [rows][elements]
//

#include <stdio.h>

int main() {

    int salary[3][4] = {
        {11, 12, 13, 14},
        {21, 22, 23, 24},
        {31, 32, 33, 34}
    };

    for(int i = 0; i < 3; i++) {         // monitoring rows

      for (int j = 0; j < 4; j++) {      // monitoring elements

          printf("salary[%d][%d]: %d\n", i, j, salary[i][j]);

      }

    }

}

