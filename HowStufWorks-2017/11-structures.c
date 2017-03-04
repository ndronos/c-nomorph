// (HowStuffWorks, 2017) Structures pp. 11

#include <stdio.h>

struct One {       // structure of the type `One`
    int a, b, c;
    float d, e, f;
};
struct One o;

struct Two {       // compressed form
    int a, b, c;
    float d, e, f;
} t;               // type declaration for `Two` and variable `t` on same statement

/*
typedef struct rec rec_type;  // create a typedef statement for the structure name
rec_type r;                  // then declare records of type `rec_type`
*/


int main() {
    o.a = 9;
    t.a = 5;            // access fields of a structure using a period

    printf("%d \n", o.a);
    printf("%d \n", t.a);

}
