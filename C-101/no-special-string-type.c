// (Klemens, 2015) Appendix A: C 101 pp. 350

#include <stdio.h>

#include <string.h>

int main(){

    char* str = "Hello";
    printf("%s \n", str);   

//  str[4]='\0'; // warning: format specifies type 'double' but the argument has type 'char *' [-Wformat]
//  printf("%s \n", str); // Segmentation fault (core dumped)
//  printf("%f \n", str); // warning: format ‘%f’ expects argument of type ‘double’, but argument 2 has type ‘char *’ [-Wformat=]
 
//  string.h
    char *str1 = "hello", str2[100];
    strlen(str1);
    printf("%lu \n", strlen(str1));   // long unsigned int   
//    strncpy(str2, 100, str1);
//    strncat(str2, 100, str1);
//    strncmp(str1, str2);
//    snprintf(str2, 100, "str1 says: %s", str1);

  
/*
    printf("size of two ints: %zu\n", 2*sizeof(int));
    printf("size of two ints: %zu\n", sizeof(int[2]));
    printf("size of a double: %zu\n", sizeof(double));
    printf("size of a ratio_s struct: %zu\n", sizeof(ratio_s));
*/

}

