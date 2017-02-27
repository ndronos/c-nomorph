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
    printf("%lu \n", strlen(str1));   // long unsigned int
//  strlen(str1);                     //get the length up to but excluding the '\0'

//    strncpy(str2, 100, str1);       //copy at most 100 bytes from str1 to str2
                                      // warning... note...

//    strncat(str2, 100, str1);       /append at most 100 bytes from str1 onto str2
                                      // warning... note...

//    strncmp(str1, str2);            //writing to a string, as above
                                      // error: too few arguments to function ‘strncmp’

    snprintf(str2, 100, "str1 says: %s", str1);
    printf("%s \n", str2);
  

}

