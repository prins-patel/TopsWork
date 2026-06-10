#include <stdio.h>

struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};

int main()
{
    struct FoodItem food[3] =
    {
        {"Pizza", 299.0, 4.5},
        {"Burger", 149.0, 4.2},
        {"Pasta", 199.0, 4.4}
    };

    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nFood Item %d\n", i + 1);
        printf("Name : %s\n", food[i].itemName);
        printf("Price : %.2f\n", food[i].price);
        printf("Rating : %.1f\n", food[i].rating);
    }
}