#include <iostream>
#include <string>

using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;

    // Constructor
    Playlist(string playlistName, string date, bool visibility) {
        name = playlistName;
        createdOn = date;
        isPublic = visibility;
    }

    // Toggle public/private status
    void togglePublic() {
        isPublic = !isPublic;
    }

    // Display playlist details
    void display() {
        cout << "Playlist Name: " << name << endl;
        cout << "Created On: " << createdOn << endl;
        cout << "Public: " << (isPublic ? "Yes" : "No") << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Playlist myPlaylist("My Favorite Songs", "2026-06-09", true);

    cout << "Initial State:" << endl;
    myPlaylist.display();

    // First toggle
    myPlaylist.togglePublic();
    cout << "After First Toggle:" << endl;
    myPlaylist.display();

    // Second toggle
    myPlaylist.togglePublic();
    cout << "After Second Toggle:" << endl;
    myPlaylist.display();

    return 0;
}
