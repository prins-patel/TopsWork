#include <stdio.h>
#include <string.h>

void addToCart(char cart[][20], int *count, char product[])
{
    strcpy(cart[*count], product);
    (*count)++;

    printf("\nUpdated Cart:\n");

    for(int i = 0; i < *count; i++)
    {
        printf("%s\n", cart[i]);
    }
}

int main()
{
    char cart[10][20] = {"Laptop", "Mouse"};
    int count = 2;

    addToCart(cart, &count, "Keyboard");

    printf("\nCart Outside Function:\n");

    for(int i = 0; i < count; i++)
    {
        printf("%s\n", cart[i]);
    }
}