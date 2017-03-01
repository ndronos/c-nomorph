// (Igneus, 2015) File Handling in C

#include <stdio.h>

int main() {


    FILE *fp;

    fp = fopen("file-test.txt", "w+");
    
    fputs("Please put this text in my file. \n", fp);

    fprintf(fp, "Please ALSO put this text in my file... \n");

    fclose(fp);

    return 0;

}

