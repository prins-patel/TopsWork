#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Playlist {
private:
    string playlistName;

public:
    // Constructor
    Playlist(string name) {
        playlistName = name;
        cout << "Playlist \"" << playlistName << "\" created." << endl;
    }

    // Destructor
    ~Playlist() {
        ofstream file("autosave.txt");

        if (file.is_open()) {
            file << "Playlist Name: " << playlistName << endl;
            file.close();
            cout << "Auto-saving playlist to autosave.txt..." << endl;
        } else {
            cout << "Error: Could not save playlist." << endl;
        }
    }
};

int main() {
    Playlist myPlaylist("My Favourites");

    cout << "Listening to songs..." << endl;

    return 0; // Destructor is called automatically here
}
