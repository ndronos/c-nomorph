// (HowStuffWorks) Scanf pp. 7

// Modify... accepts three values intead of two and adds all three together

#include <stdio.h>

int main() {

    int a, b, c;
    printf("Enter value a: ");
    scanf("%d", &a);
    printf("Enter value b: ");
    scanf("%d", &b);
    printf("Enter value c: ");
    scanf("%d", &c);
    printf("%d + %d + %d = %d \n", a, b, c, a + b + c);

    return 0;

}

