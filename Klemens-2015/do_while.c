// (Klemens, 2015) Appendix A: C 101 pp. 356-357

#include <stdio.h>


void loops(int max){

    int i=0;

    do { 
   // while (i < 10){

        printf("Hello #%i\n", i);
        i++;

    } while (i < max);  //Note the semicolon.

}


int main(){
    loops(3); //prints three greetings
    loops(0); //prints one greetings
}

