#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("playlist.txt", "w");

    fprintf(fp, "Tum Hi Ho\n");
    fprintf(fp, "Perfect\n");
    fprintf(fp, "Believer\n");

    fclose(fp);

    printf("Songs Written Successfully");
}