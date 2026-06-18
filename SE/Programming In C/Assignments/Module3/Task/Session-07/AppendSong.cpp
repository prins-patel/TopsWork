/*Modify your code to append a new song name entered by the user to my_fav_songs.txt without overwriting the existing list.<br><br><em><strong>Hint:</strong> Open the file in append mode using ofstream.</em>*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string newSong;

    cout << "Enter a new song name: ";
    getline(cin, newSong);

    // Open file in append mode
    ofstream file("my_fav_songs.txt", ios::app);

    if (file.is_open()) {
        file << newSong << endl;
        file.close();

        cout << "Song added successfully!" << endl;
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}
