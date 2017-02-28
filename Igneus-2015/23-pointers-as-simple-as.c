// (Igneus, 2015) Pointers as simple as possible

// pointers are really the lightweight, don't take it too hard
//          are simply a datatype that stores the memory
// as defined, ultimatelly are grabing some memory space
//          and placing some values in it, and later accessing those values
//          if you want/have to access that memory location, you can use the pointer
// like a postcard that prints the address of a person
// declared or not, it uses memory space

#include <stdio.h>

int main() {

    int HighScore = 111;

    int *ip;  //* declare pointer  //ip integer pointer by the author   

    ip = &HighScore;  // assign address value

    printf("%d \n",  HighScore);
    printf("%x \n",  HighScore);
    printf("%x \n", &HighScore);  // & address  // warning...

    printf("\n");

    printf("%x \n",  ip); // address
    printf("%d \n", *ip); // value
    printf("%d \n",  ip); // messy number


   // %x for memory space

}

