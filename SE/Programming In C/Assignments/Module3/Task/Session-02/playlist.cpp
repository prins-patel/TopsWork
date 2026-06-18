#include <iostream>
#include <string>

using namespace std;

class Playlist {
public:
    string name;
    string createdOn;  // Using string for simplicity
    bool isPublic;

    // Constructor
    Playlist(string playlistName, string date, bool visibility) {
        name = playlistName;
        createdOn = date;
        isPublic = visibility;
    }

    // Display playlist details
    void display() {
        cout << "Playlist Name: " << name << endl;
        cout << "Created On: " << createdOn << endl;
        cout << "Public: " << (isPublic ? "Yes" : "No") << endl;
    }
};

int main() {
    // Instantiate a Playlist object
    Playlist myPlaylist(
        "My Favorite Songs",
        "2026-06-09",
        true
    );

    // Print all properties
    myPlaylist.display();

    return 0;
}
