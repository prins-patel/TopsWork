#include <stdio.h>

float calculateFinalPrice(float price, float discountPercentage, int isMember)
{
    float discountAmount, finalPrice;

    discountAmount = (price * discountPercentage) / 100;
    finalPrice = price - discountAmount;

    if(isMember)
    {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    return finalPrice;
}

int main()
{
    float finalPrice;

    finalPrice = calculateFinalPrice(1000, 20, 1);

    printf("Final Price = %.2f", finalPrice);

}