#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
};

struct MovieShow
{
    char movie[50];
    int screen;
    struct Time t;
};

int main()
{
    struct MovieShow show =
    {
        "Pushpa 2",
        3,
        {7, 30}
    };

    printf("Movie : %s\n", show.movie);
    printf("Screen : %d\n", show.screen);
    printf("Time : %02d:%02d\n",
           show.t.hours,
           show.t.minutes);
}