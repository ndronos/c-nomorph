// (K&R, 1988) pp. 6-7

// The first C program

#include <stdio.h>              //  include information about standard library

main()                          //  define a function named `main`
                                //  that receives no argument values
{                               //  statements of `main` are enclosed in braces
    printf("hello, world\n");   //  `main` calls library function `printf`
}                               //  to print this sequence of characters;
                                //  `\n` represents the newline character

/*
$ clang hello-kandr.c
hello-kandr.c:5:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
main()
^
1 warning generated.

$ gcc hello-kandr.c
hello-kandr.c:5:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main()
 ^
*/

