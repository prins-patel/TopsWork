#include <stdio.h>

int main()
{
    int choice;

    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");

    printf("Enter Choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        {
            printf("Suggestion: Poha");
            break;
        }

        case 2:
        {
            printf("Suggestion: Paneer Thali");
            break;
        }

        case 3:
        {
            printf("Suggestion: Biryani");
            break;
        }

        case 4:
        {
            printf("Suggestion: Sandwich");
            break;
        }

        default:
        {
            printf("Try some fruits!");
        }
    }
}