// (HowStuffWorks, 2017) The Basics of C Programming pp. 1

#include <stdio.h>

int main() {

    int a, b, c;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    c = a + b;
    printf("%d + %d = %d \n", a, b, c);
    return 0;

}
    
