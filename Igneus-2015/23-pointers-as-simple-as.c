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

    int player1 = 4;
    int player2[10];
    int player3[100];

    printf("%x \n",  player1);  // 4
    printf("%x \n", &player2);  //player2); // eb086xxx // warning:... format unsigned int ... argument int
    printf("%x \n", &player3); 
   // %x for memory space

}

