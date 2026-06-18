/*Create a text file called my_fav_songs.txt and write the names of your 5 favorite songs into it using ofstream.*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("my_fav_songs.txt");

    if (file.is_open()) {
        file << "Believer\n";
        file << "Thunder\n";
        file << "Shape of You\n";
        file << "Blinding Lights\n";
        file << "Perfect\n";

        file.close();
        cout << "Songs written successfully to my_fav_songs.txt" << endl;
    } else {
        cout << "Unable to create file." << endl;
    }

    return 0;
}
