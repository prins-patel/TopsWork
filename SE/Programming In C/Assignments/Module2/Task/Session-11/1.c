#include <stdio.h>

int main()
{
    int likes = 500;
    int *ptrLikes;

    ptrLikes = &likes;

    printf("Value of likes = %d\n", likes);
    printf("Value using pointer = %d\n", *ptrLikes);
    printf("Address stored in pointer = %p\n", ptrLikes);
}