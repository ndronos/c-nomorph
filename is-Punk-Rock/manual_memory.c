// (Klemens, 2015) Appendix A: C 101 pp. 359-360

/*
    Here is an example that fills a manually allocated array
    and then prints it to a file.
    This example could more easily be done using an automatically allocated array,
    but for demonstration purposes, here it is:
*/

int main(){

    int *intspace = malloc(3000*sizeof(int));
    for (int i=0; i < 3000; i++)
        inspace[i] = i;

    FILE *cf = fopen("counter_file.txt", "w");
    for (int i=0; i < 3000; i++)
        fprintf(cf, "%i\n", intspace[i]);

    free(intspace);
    fclose(cf);

}

