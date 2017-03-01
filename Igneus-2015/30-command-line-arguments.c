// (Igneus, 2015) Command Line Arguments

//  argv[]    pass arguments and additional information, an array of arguments
//  argv[0]   Application Name        // 0 element is the 1st element
//  argv[1]   Argument                // argc == 2
//  argv[2]
//  argv[...

#include <stdio.h>

int main(int argc, const char * argv[]) {

    printf("Program name %s \n", argv[0]);

    if ( argc == 2 )
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


