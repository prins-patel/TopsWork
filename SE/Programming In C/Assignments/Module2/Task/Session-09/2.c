#include <stdio.h>

int main()
{
    int playlistRatings[3][5] =
    {
        {4, 5, 4, 3, 5},
        {5, 5, 4, 4, 5},
        {3, 4, 4, 5, 4}
    };

    int j;

    printf("Ratings of Second Playlist:\n");

    for(j = 0; j < 5; j++)
    {
        printf("%d ", playlistRatings[1][j]);
    }
}