#include <stdio.h>

int main()
{
    int likes = 1200;
    int comments = 150;
    int shares = 60;

    int trending;

    trending = (likes >= 1000) || (comments > 200 && shares >= 50);

    if(trending)
    {
        printf("Post is Trending");
    }
        
    else
    {
        printf("Post is Not Trending");
    }
}