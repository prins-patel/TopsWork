#include <stdio.h>
#include <string.h>

int main()
{
    int choice = 0;
    char newTeam[30];

    while(choice != 3)
    {
        printf("\n1. View Favorite Teams");
        printf("\n2. Add New Team");
        printf("\n3. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("\nMI");
            printf("\nCSK");
            printf("\nRCB\n");
        }
        else if(choice == 2)
        {
            printf("Enter New Team Name: ");
            scanf("%s", newTeam);

            printf("Team Added: %s\n", newTeam);
        }
        else if(choice == 3)
        {
            printf("Exiting Program...");
        }
        else
        {
            printf("Invalid Choice");
        }
    }
}