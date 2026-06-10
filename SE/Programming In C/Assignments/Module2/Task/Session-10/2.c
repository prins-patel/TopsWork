#include <stdio.h>
#include <string.h>

int main()
{
    char username1[50];
    char username2[50];

    printf("Enter First Username: ");
    scanf("%s", username1);

    printf("Enter Second Username: ");
    scanf("%s", username2);

    if(strcmp(username1, username2) == 0)
    {
        printf("Usernames are Same");
    }
    else
    {
        printf("Usernames are Different");
    }
}