#include <stdio.h>

float averageSpend(int orders[])
{
    int i, sum = 0;

    for(i = 0; i < 7; i++)
    {
        sum = sum + orders[i];
    }

    return (float)sum / 7;
}

int main()
{
    int orders[7] = {200, 350, 400, 250, 500, 300, 450};

    printf("Average Weekly Spend = %.2f",
           averageSpend(orders));
}