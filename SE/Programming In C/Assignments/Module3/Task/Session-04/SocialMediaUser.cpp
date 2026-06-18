#include <iostream>
#include <string>
using namespace std;

class SocialMediaUser {
protected:
    string username;
    int followers;

public:
    // Constructor
    SocialMediaUser(string uname, int f) {
        username = uname;
        followers = f;
    }

    // Method to display profile details
    void displayProfile() {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

int main() {
    SocialMediaUser user("mahiman15", 2500);

    user.displayProfile();

    return 0;
}
