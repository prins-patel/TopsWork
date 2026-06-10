#include <stdio.h>

int main()
{
    int prices[] = {120, 250, 90};
    int total = 0;
    int i;

    for(i = 0; i < 3; i++)
    {
        total += prices[i];
    }

    printf("Total Price = %d", total);
}