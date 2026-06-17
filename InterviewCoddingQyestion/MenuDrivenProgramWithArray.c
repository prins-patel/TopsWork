#include<stdio.h>

int main()
{
    int n;
    int i, j;
    int num[10];
    int sum = 0;
    int counteven = 0;
    int countodd = 0;
    int temp;

    printf("Enter array size : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &num[i]);
    }

    while(1)
    {
        int choice;

        printf("\n\n");
        printf("1. Ascending Order\n""2. Count Even/Odd\n""3. Sum of Array\n""4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
                case 1:
                for(i = 0; i < n; i++)
                {
                    for(j = i + 1; j < n; j++)
                    {
                        if(num[i] > num[j])
                        {
                            temp = num[i];
                            num[i] = num[j];
                            num[j] = temp;
                        }
                    }
                }
        

                printf("Accending Order: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", num[i]);
                }
                break;

            case 2:
                counteven = 0;
                countodd = 0;

                for(i = 0; i < n; i++)
                {
                    if(num[i] % 2 == 0)
                    {
                        counteven++;
                    }   
                    else
                    {
                        countodd++;
                    }
                        
                }

                printf("Even Numbers: %d\n", counteven);
                printf("Odd Numbers: %d\n", countodd);
                break;

            case 3:
                sum = 0;

                for(i = 0; i < n; i++)
                {
                    sum += num[i];
                }

                printf("Sum Of Array = %d\n", sum);
                break;

            case 4:
                printf("Exit");

            default:
                printf("Invalid Choice");
            
        }
    }
}