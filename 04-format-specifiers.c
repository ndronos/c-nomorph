// (Igneus, 2015) Format Specifiers

/*
  Format Specifier

  Problem           Every placeholder value is actually importance
                    Every value has a placeholder for them

*/



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


    int     value   = 10;
    double  Double  = 10.5;
    char    Char    = 'c';

    printf(" %d\n %d\n %d\n", value, Double, Char);
//  ... 33:39: warning: format specifies type 'int' but the argument has type 'double' [-Wformat]
//  printf(" %d\n %d\n %d\n ", value, Double, Char);
//                ~~                  ^~~~~~
//                %f


    return 0;

}

