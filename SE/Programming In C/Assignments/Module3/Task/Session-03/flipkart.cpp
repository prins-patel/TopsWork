#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string productName;
    double price;
    float rating;

public:
    // Parameterized constructor
    Product(string name, double p, float r) {
        productName = name;
        price = p;
        rating = r;
    }

    // Method to display product details
    void displayInfo() {
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Rating: " << rating << " / 5" << endl;
    }
};

int main() {
    Product p1("Samsung Galaxy M12", 12999.0, 4.3);

    p1.displayInfo();

    return 0;
}
