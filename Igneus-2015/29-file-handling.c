// (Igneus, 2015) File Handling in C

#include <stdio.h>

int main() {


    FILE *fp;                                                     // file datatype needs a pointer

    fp = fopen("file-test.txt", "w+");                            // open file on write mode, + create new
    
    fputs("Please put this text in my file. \n", fp);             //

    fprintf(fp, "Please ALSO put this text in my file... \n");    // 

    fclose(fp);                                                   // close file



    printf("%s created and written file-test.txt \n", __FILE__);

    return 0;

}

