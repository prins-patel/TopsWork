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
class Podcaster : public SocialMediaUser {
private:
    string podcastName;

public:
    // Constructor
    Podcaster(string uname, int f, string pName)
        : SocialMediaUser(uname, f) {
        podcastName = pName;
    }

    // Method to publish an episode
    void publishEpisode(string episodeTitle) {
        cout << "Episode \"" << episodeTitle
             << "\" published on "
             << podcastName << endl;
    }
};

int main() {
    Podcaster pod("mahiman15", 1800, "Tech Talks");

    pod.displayProfile();

    cout << endl;

    pod.publishEpisode("The Future of AI");

    return 0;
}
