#include <stdio.h>

void formatFollowersCount(int count)
{
    if(count >= 1000000)
    {
        printf("%.1fM", count / 1000000.0);
    }
    else if(count >= 1000)
    {
        printf("%.1fK", count / 1000.0);
    }
    else
    {
        printf("%d", count);
    }
}

int main()
{
    formatFollowersCount(1500);
    printf("\n");

    formatFollowersCount(1200000);
    printf("\n");

    formatFollowersCount(800);
}