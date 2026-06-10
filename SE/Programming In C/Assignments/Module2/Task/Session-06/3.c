#include <stdio.h>
#include <string.h>

int main()
{
    char songs[3][20] = {"Believer", "Perfect", "ShapeOfYou"};
    char guess[20];

    printf("Guess the Song!\n");

    do
    {
        printf("Enter Song Name: ");
        scanf("%s", guess);

        if(strcmp(guess, songs[1]) != 0)
        {
            printf("Wrong Guess! Try Again.\n");
        }

    } while(strcmp(guess, songs[1]) != 0);

    printf("Correct Song!");
}