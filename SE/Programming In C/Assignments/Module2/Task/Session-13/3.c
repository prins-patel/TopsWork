#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("playlist.txt", "a");

    fprintf(fp, "Love Story\n");
    fprintf(fp, "Shape Of You\n");

    fclose(fp);

    printf("Songs Added Successfully");
}