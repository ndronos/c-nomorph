// (Igneus, 2015) Format Specifiers

#include <stdio.h>

int main() {

    printf("Value for storage size of `int`: %lu \n", sizeof(int)); 

//  printf("Value for storage size of `int`: %d  \n", sizeof(int)); 
//                                           ~~      ^~~~~~~~~~~~
//                                           %lu


    printf("Value for storage size of `char`: %lu \n", sizeof(char)); 

    printf("Value for storage size of `char`: %d  \n", sizeof(char)); 

/*
$ clang 04-format-specifiers.c 
04-format-specifiers.c:9:55: warning: format specifies type 'int' but the argument has type 'unsigned long'
      [-Wformat]
    printf("Value for storage size of `char`: %d \n", sizeof(char)); 
                                              ~~      ^~~~~~~~~~~~
                                              %lu
1 warning generated.
*/

    return 0;

}

