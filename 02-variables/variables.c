// (Ingneus, 2015) Variables

/*  Variables

    Naming        begin with letter or underscore
    
    camelCase

*/

#include <stdio.h>

int main() {

  int a, b, c;
  char d;
  int e;
  float amount;



  int total_life = 10;
  int usedLife = 4;

  int remaining_life = total_life - usedLife;
  
  printf("The remaining life are: %d", remaining_life);
  printf("\n");


//printf(remaining_life);       
//                              2 warnings generated.
//                              Segmentation fault (core dumped)




  return 0;

}


/*

$ ./a.out 
The remaining life are: 6
Segmentation fault (core dumped)

*/

/*

$ clang variables.c 
variables.c:30:40: warning: incompatible integer to pointer conversion passing 'int' to parameter of type
      'const char *' [-Wint-conversion]
                                printf(remaining_life);
                                       ^~~~~~~~~~~~~~
/usr/include/stdio.h:362:43: note: passing argument to parameter '__format' here
extern int printf (const char *__restrict __format, ...);
                                          ^
variables.c:30:40: warning: format string is not a string literal (potentially insecure) [-Wformat-security]
                                printf(remaining_life);
                                       ^~~~~~~~~~~~~~
2 warnings generated.

*/ 

/*
$ gcc variables.c 
variables.c: In function ‘main’:
variables.c:31:10: warning: passing argument 1 of ‘printf’ makes pointer from integer without a cast [-Wint-conversion]
   printf(remaining_life);
          ^
In file included from variables.c:11:0:
/usr/include/stdio.h:362:12: note: expected ‘const char * restrict’ but argument is of type ‘int’
 extern int printf (const char *__restrict __format, ...);
            ^
variables.c:31:3: warning: format not a string literal and no format arguments [-Wformat-security]
   printf(remaining_life);
   ^
*/
