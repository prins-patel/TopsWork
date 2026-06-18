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

// Derived Class (Level 1)
class YouTuber : public SocialMediaUser {
protected:
    string channelName;

public:
    YouTuber(string uname, int f, string chName)
        : SocialMediaUser(uname, f) {
        channelName = chName;
    }

    void uploadVideo(string title) {
        cout << "Video \"" << title
             << "\" uploaded to "
             << channelName << endl;
    }
};

// Derived Class (Level 2)
class GamingYouTuber : public YouTuber {
public:
    GamingYouTuber(string uname, int f, string chName)
        : YouTuber(uname, f, chName) {}

    void streamGame(string gameName) {
        cout << username
             << " is now streaming "
             << gameName
             << " on "
             << channelName
             << endl;
    }
};

int main() {
    GamingYouTuber gamer("mahiman15", 5000, "Rush With AK");

    gamer.displayProfile();

    cout << endl;

    gamer.uploadVideo("Top 10 COD Mobile Tips");

    gamer.streamGame("Call of Duty Mobile");

    return 0;
}
