/*Imagine a Flipkart-like app: create an abstract class Product with an abstract method upload(). Then, create two subclasses, Electronics and Clothing, that each implement the upload() method to print a different upload message.*/

#include <iostream>
using namespace std;

// Abstract Class
class Product {
public:
    virtual void upload() = 0; // Pure virtual function
};

// Electronics subclass
class Electronics : public Product {
public:
    void upload() override {
        cout << "Uploading Electronics Product: Mobile Phone" << endl;
    }
};

// Clothing subclass
class Clothing : public Product {
public:
    void upload() override {
        cout << "Uploading Clothing Product: T-Shirt" << endl;
    }
};

int main() {
    Electronics electronicItem;
    Clothing clothingItem;

    electronicItem.upload();
    clothingItem.upload();

    return 0;
}
