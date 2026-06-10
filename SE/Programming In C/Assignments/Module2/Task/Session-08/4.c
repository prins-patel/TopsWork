#include <stdio.h>

void formatPrice(int price)
{
    printf("₹%d\n", price);
}

int main()
{
    formatPrice(1599);
    formatPrice(24999);
    formatPrice(799);
}