#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char song[100];
    char temp[100];
    int i;

    fp = fopen("playlist.txt", "r");

    printf("Songs containing 'love':\n");

    while(fgets(song, sizeof(song), fp) != NULL)
    {
        strcpy(temp, song);

        for(i = 0; temp[i] != '\0'; i++)
        {
            if(temp[i] >= 'A' && temp[i] <= 'Z')
            {
                temp[i] = temp[i] + 32;
            }
        }

        if(strstr(temp, "love") != NULL)
        {
            printf("%s", song);
        }
    }

    fclose(fp);
}