#include <stdio.h>
#include <string.h>

int main()
{
    char fullName[50];
    char username[6];
    int i;

    printf("Enter Full Name: ");
    scanf("%s", fullName);

    if(strlen(fullName) < 5)
    {
        strcpy(username, fullName);
    }
    else
    {
        for(i = 0; i < 5; i++)
        {
            username[i] = fullName[i];
        }

        username[5] = '\0';
    }

    printf("Generated Username = %s", username);
}