#include <stdio.h>
#include <string.h>

int main()
{
    char team[20];

    printf("Enter IPL Team: ");
    scanf("%s", team);

    if(strcmp(team,"MI")==0)
    {
        printf("Go Mumbai Indians!");
    }
    else if(strcmp(team,"CSK")==0)
    {
        printf("Chennai Super Kings for the win!");
    }
    else if(strcmp(team,"RCB")==0)
    {
        printf("Ee Sala Cup Namde!");
    }
    else if(strcmp(team,"KKR")==0)
    {
        printf("Korbo Lorbo Jeetbo!");
    }
    else
    {
        printf("Team not found!");
    }
}