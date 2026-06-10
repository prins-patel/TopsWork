#include <stdio.h>

int main()
{
    int minutes[7] = {0};
    int choice, i;
    int total, highest;
    float average;
    char confirm;

    FILE *fp;

    while(1)
    {
        printf("\n\n===== MUSIC LISTENING LOGGER =====");
        printf("\n1. Log Listening Minutes");
        printf("\n2. View Weekly Summary");
        printf("\n3. Generate Weekly Report");
        printf("\n4. Reset Data");
        printf("\n5. Exit");

        printf("\n\nEnter Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                fp = fopen("music_log.txt", "w");

                for(i = 0; i < 7; i++)
                {
                    printf("Enter Minutes for Day %d : ", i + 1);
                    scanf("%d", &minutes[i]);

                    fprintf(fp, "%d\n", minutes[i]);
                }

                fclose(fp);

                printf("\nData Saved Successfully!");
                break;
            }

            case 2:
            {
                printf("\nWeekly Listening Summary\n");

                for(i = 0; i < 7; i++)
                {
                    printf("Day %d = %d Minutes\n",
                           i + 1,
                           minutes[i]);
                }

                break;
            }

            case 3:
            {
                fp = fopen("music_log.txt", "r");

                if(fp == NULL)
                {
                    printf("\nNo Data Found!");
                }
                else
                {
                    total = 0;
                    highest = 0;

                    for(i = 0; i < 7; i++)
                    {
                        fscanf(fp, "%d", &minutes[i]);

                        total = total + minutes[i];

                        if(minutes[i] > highest)
                        {
                            highest = minutes[i];
                        }
                    }

                    average = total / 7.0;

                    printf("\n===== WEEKLY REPORT =====");
                    printf("\nTotal Minutes : %d", total);
                    printf("\nAverage Minutes : %.2f", average);
                    printf("\nHighest Minutes : %d", highest);

                    fclose(fp);
                }

                break;
            }

            case 4:
            {
                printf("\nAre you sure? (Y/N) : ");
                scanf(" %c", &confirm);

                if(confirm == 'Y' || confirm == 'y')
                {
                    for(i = 0; i < 7; i++)
                    {
                        minutes[i] = 0;
                    }

                    fp = fopen("music_log.txt", "w");
                    fclose(fp);

                    printf("\nData Reset Successfully!");
                }
                else
                {
                    printf("\nReset Cancelled!");
                }

                break;
            }

            case 5:
            {
                printf("\nThank You!");
                return 0;
            }

            default:
            {
                printf("\nInvalid Choice!");
            }
        }
    }
}