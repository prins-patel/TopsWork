/* Create a class called Song in your preferred OOP language with private properties title and artist. Add public getter and setter methods to access and modify these properties, then create an object and update its title. */

#include <iostream>
#include <string>
using namespace std;

class Song {
private:
    string title;
    string artist;

public:
    // Setter methods
    void setTitle(string t) {
        title = t;
    }

    void setArtist(string a) {
        artist = a;
    }

    // Getter methods
    string getTitle() {
        return title;
    }

    string getArtist() {
        return artist;
    }
};

int main() {
    Song song;

    // Set initial values
    song.setTitle("Believer");
    song.setArtist("Imagine Dragons");

    cout << "Original Title: " << song.getTitle() << endl;
    cout << "Artist: " << song.getArtist() << endl;

    // Update title
    song.setTitle("Thunder");

    cout << "\nUpdated Title: " << song.getTitle() << endl;

    return 0;
}
