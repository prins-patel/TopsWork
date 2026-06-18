#include <iostream>
#include <string>
using namespace std;

// Base Class
class SocialMediaUser {
protected:
    string username;
    int followers;

public:
    SocialMediaUser(string uname, int f) {
        username = uname;
        followers = f;
    }

    void displayProfile() {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

// Derived Class
class InstagramInfluencer : public SocialMediaUser {
public:
    // Constructor
    InstagramInfluencer(string uname, int f)
        : SocialMediaUser(uname, f) {}

    // Method to post a story
    void postStory(string storyTitle) {
        cout << username
             << " posted a new story: "
             << storyTitle << endl;
    }
};

int main() {
    InstagramInfluencer influencer("mahiman15", 3500);

    influencer.displayProfile();

    cout << endl;

    influencer.postStory("Behind the Scenes of My New Video");

    return 0;
}
