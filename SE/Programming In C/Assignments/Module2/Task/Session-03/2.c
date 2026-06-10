#include <stdio.h>

int main()
{
    const float GST_RATE = 18.0;
    float basePrice = 500.0;
    float finalPrice;

    finalPrice = basePrice + (basePrice * GST_RATE / 100);

    printf("Base Price = %.2f\n", basePrice);
    printf("GST Rate = %.2f%%\n", GST_RATE);
    printf("Final Price = %.2f\n", finalPrice);
}