#include <iostream>
using namespace std;

// Base Class
class SocialMediaUploader {
public:
    virtual void uploadContent() {
        cout << "Uploading content to social media..." << endl;
    }
};

// Derived Class: Instagram
class InstagramUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        cout << "Uploading photo/reel to Instagram with filters and hashtags." << endl;
    }
};

// Derived Class: YouTube
class YouTubeUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        cout << "Uploading HD video to YouTube with thumbnail and description." << endl;
    }
};

int main() {
    InstagramUploader instagram;
    YouTubeUploader youtube;

    instagram.uploadContent();
    youtube.uploadContent();

    return 0;
}
