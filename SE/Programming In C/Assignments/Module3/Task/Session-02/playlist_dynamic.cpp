#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;
    vector<string> songs; // Dynamic array of songs

    // Constructor
    Playlist(string playlistName, string date, bool visibility) {
        name = playlistName;
        createdOn = date;
        isPublic = visibility;
        songs = {}; // Initialize as empty
    }

    // Toggle public/private status
    void togglePublic() {
        isPublic = !isPublic;
    }

    // Add a song
    void addSong(string songTitle) {
        songs.push_back(songTitle);
    }

    // Display playlist details
    void display() {
        cout << "Playlist Name: " << name << endl;
        cout << "Created On: " << createdOn << endl;
        cout << "Public: " << (isPublic ? "Yes" : "No") << endl;

        cout << "\nSongs:" << endl;
        if (songs.empty()) {
            cout << "No songs in playlist." << endl;
        } else {
            for (int i = 0; i < songs.size(); i++) {
                cout << i + 1 << ". " << songs[i] << endl;
            }
        }

        cout << "------------------------" << endl;
    }
};

int main() {
    Playlist myPlaylist("My Favorite Songs", "2026-06-09", true);

    // Add three songs
    myPlaylist.addSong("Shape of You");
    myPlaylist.addSong("Blinding Lights");
    myPlaylist.addSong("Perfect");

    // Display updated playlist
    myPlaylist.display();

    return 0;
}
