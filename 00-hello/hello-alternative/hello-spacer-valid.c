// (Igneus, 2015) Programming 101

// spaces on everything

#include <stdio.h>

int
main()
{
    printf(
            "hello,   spacer!     \n    "
    )
    ;
    return
            0
    ;
}

/*
$ gcc hello-spacer.c 

hello-spacer.c: In function ‘main’:
hello-spacer.c:11:13: warning: missing terminating " character
             "hello,
             ^
hello-spacer.c:11:13: error: missing terminating " character
hello-spacer.c:12:14: error: ‘spacer’ undeclared (first use in this function)
              spacer!
              ^
hello-spacer.c:12:14: note: each undeclared identifier is reported only once for each function it appears in
hello-spacer.c:12:20: error: expected ‘)’ before ‘!’ token
              spacer!
                    ^
hello-spacer.c:13:14: error: stray ‘\’ in program
              \n
              ^
hello-spacer.c:14:13: warning: missing terminating " character
             "
             ^
hello-spacer.c:14:13: error: missing terminating " character
*/
