#include <stdio.h>

struct Bio
{
    char description[100];
    int age;
};

struct InstaProfile
{
    char username[50];
    int followers;
    struct Bio bio;
};

int main()
{
    struct InstaProfile profile =
    {
        "prince_patel",
        5000,
        {"Java Developer", 22}
    };

    printf("Username : %s\n", profile.username);
    printf("Followers : %d\n", profile.followers);
    printf("Bio : %s\n", profile.bio.description);
    printf("Age : %d\n", profile.bio.age);
}