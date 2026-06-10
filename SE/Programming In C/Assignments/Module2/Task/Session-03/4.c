#include <stdio.h>

int main()
{
    char playlistName[] = "Top Hits";
    int totalSongs = 50;
    float avgDuration = 3.5;

    printf("My favorite Spotify playlist is %s, it contains %d songs and the average song duration is %.1f minutes.\n",
           playlistName, totalSongs, avgDuration);

}