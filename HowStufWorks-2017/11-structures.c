// (HowStuffWorks, 2017) Structures pp. 11

#include <stdio.h>

struct rec {       // structure of the type recB
    int a, b, c;
    float d, e, f;
};
struct rec r;

struct rec {       // compressed form
    int a, b, c;
    float d, e, f;
} r;               // type declaration for recC and variable r on same statement


typedf struct rec rec_type;  // create a typedef statement for the structure name
rec_type r;                  // then declare records of type `rec_type`

r.a = 5;            // access fields of a structure using a period

int main() {

    printf("%d \n", r.a);
:w

}
