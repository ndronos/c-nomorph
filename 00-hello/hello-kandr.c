// (K&R, 1988) pp. 6-7

#include <stdio.h>

main()
{
    printf("hello, world\n");
}


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

