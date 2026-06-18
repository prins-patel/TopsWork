/*Build a Flipkart-style wishlist tracker: ask the user to enter 3 product names and prices, save them to a file called wishlist.txt, then read the file and display each product with its price.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string productName;
    double price;

    // Save products to file
    ofstream outFile("wishlist.txt");

    if (!outFile) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    cout << "Enter details for 3 products:\n";

    for (int i = 1; i <= 3; i++) {
        cout << "\nProduct " << i << " Name: ";
        cin.ignore(i == 1 ? 0 : '\n');
        getline(cin, productName);

        cout << "Price: ";
        cin >> price;

        outFile << productName << "," << price << endl;
    }

    outFile.close();

    // Read and display products from file
    ifstream inFile("wishlist.txt");

    if (!inFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "\n\n--- Wishlist Items ---\n";

    string line;
    while (getline(inFile, line)) {
        size_t pos = line.find(',');

        string name = line.substr(0, pos);
        string productPrice = line.substr(pos + 1);

        cout << "Product: " << name
             << " | Price: ?" << productPrice << endl;
    }

    inFile.close();

    return 0;
}
