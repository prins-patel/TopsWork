#include <stdio.h>

// Function to check whether a number is even
int isEven(int num)
{
    // If remainder is 0, the number is even
    if(num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number = 10;

    if(isEven(number))
    {
        printf("%d is Even", number);
    }
    else
    {
        printf("%d is Odd", number);
    }
}