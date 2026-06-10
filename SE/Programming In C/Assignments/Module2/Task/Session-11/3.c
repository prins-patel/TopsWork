#include <stdio.h>

int main()
{
    int orders[5] = {200, 350, 500, 250, 400};
    int *ptr;
    int i;

    ptr = orders;

    for(i = 0; i < 5; i++)
    {
        printf("Amount = %d\tAddress = %p\n",
               *(ptr + i),
               (ptr + i));
    }
}