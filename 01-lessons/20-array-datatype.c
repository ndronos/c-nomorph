//  (Igneus, 2015) Array datatype

//  Arrays starts     with 0 index
//
//  Ways to declare
//  1)                  double salary[9];
//  2)                  double salary[4] = {100, 200, 500, 600}
//  3)                  double salary[] =  {100, 200, 500, 600, 800, 900}
//  Insert value        salary[0] = 20.0;

#include <stdio.h>

int main() {

    int rollNo[20];

    for (int i = 0; i < 20; i++) {
      rollNo[i] = i+10;
    }

    for (int j = 0; j < 20; j++) {
      printf("Element value at [%d]: %d\n", j, rollNo[j]);
    }

    return 0;

}

