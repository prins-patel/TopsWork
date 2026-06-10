#include <stdio.h>

int isEligibleForOffer(int age, float orderValue)
{
    return (age >= 18 && orderValue > 500);
}

int main()
{
    if(isEligibleForOffer(20, 600))
    {
        printf("Eligible for Offer");
    }
        
    else
    {
        printf("Not Eligible for Offer");
    }
        

}