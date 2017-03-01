// (Igneus, 2015) Command Line Arguments

#include <stdio.h>

int main(int argc, const char * argv[]) {

    printf("Program name %s \n", argv[0]);

    if ( argc ==2 )
    {
        printf("The argument supplied is %s \n", argv[1]);
    }
    else if ( argc > 2)
    {
        printf("Too many arguments supplied. \n");
    }
    else
    {
        printf("One argument expected. \n");
    }

}


