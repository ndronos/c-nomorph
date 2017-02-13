// (Igneus, 2015) Character Pyramid

// ascii A:65 ... Z:90

#include <stdio.h>

int main() {

  char limit, value = 'A';
  
  printf("Enter last row uppercase for Character Pyramid: ");
  scanf("%c", &limit);

  for (int row=1; row <= (limit-'A'+1); row++) {

      for (int line=1; line <= row; line++) {
       
          printf("%c", value);  //row); gives ascii...

      }

      value++;
      printf("\n");

  }



    return 0;
}
