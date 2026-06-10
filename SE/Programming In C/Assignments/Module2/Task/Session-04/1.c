#include <stdio.h>

float calculateTotal(float itemPrice, int quantity)
{
    return itemPrice * quantity;
}

int main()
{
    float total = calculateTotal(500, 3);

    printf("Total Bill Amount = %.2f", total);

}