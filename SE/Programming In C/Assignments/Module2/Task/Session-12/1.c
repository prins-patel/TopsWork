#include <stdio.h>

struct Playlist
{
    char title[50];
    char artist[50];
    int duration;
};

int main()
{
    struct Playlist song =
    {
        "Tum Hi Ho",
        "Arijit Singh",
        270
    };

    printf("Title : %s\n", song.title);
    printf("Artist : %s\n", song.artist);
    printf("Duration : %d Seconds\n", song.duration);
}