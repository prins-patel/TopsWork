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
class YouTuber : public SocialMediaUser {
private:
    string channelName;

public:
    // Constructor
    YouTuber(string uname, int f, string chName)
        : SocialMediaUser(uname, f) {
        channelName = chName;
    }

    // Method to upload a video
    void uploadVideo(string title) {
        cout << "Video \"" << title
             << "\" uploaded to "
             << channelName << endl;
    }
};

int main() {
    YouTuber yt("mahiman15", 2500, "Rush With AK");

    yt.displayProfile();

    cout << endl;

    yt.uploadVideo("Call of Duty Mobile Gameplay");

    return 0;
}
