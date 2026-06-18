#include <iostream>
#include <string>
using namespace std;

class Movie {
private:
    string title;
    int releaseYear;
    float rating;

public:
    // Parameterized Constructor
    Movie(string t, int y, float r) {
        title = t;
        releaseYear = y;
        rating = r;
    }

    // Copy Constructor
    Movie(const Movie &m) {
        title = m.title;
        releaseYear = m.releaseYear;
        rating = m.rating;
    }

    // Display Movie Details
    void display() {
        cout << "Title: " << title << endl;
        cout << "Release Year: " << releaseYear << endl;
        cout << "Rating: " << rating << "/10" << endl;
    }
};

int main() {
    // Original Movie Object
    Movie movie1("Inception", 2010, 8.8);

    // Copied Movie Object using Copy Constructor
    Movie movie2(movie1);

    cout << "Original Movie Details:" << endl;
    movie1.display();

    cout << "\nCopied Movie Details:" << endl;
    movie2.display();

    return 0;
}
