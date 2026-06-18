#include <iostream>
#include <string>
using namespace std;

class Playlist {
private:
    string playlistName;

public:
    // Default constructor
    Playlist() {
        playlistName = "My Favourites";
        cout << "Welcome! Playlist \"" << playlistName 
             << "\" has been created." << endl;
    }
};

int main() {
    Playlist p1;  // Constructor is called automatically
    return 0;
}
