#include <iostream>
using namespace std;

class Ticket {
public:
    // Constructor
    Ticket() {
        cout << "Ticket booked successfully!" << endl;
    }

    // Destructor
    ~Ticket() {
        cout << "Saving your ticket..." << endl;
    }
};

int main() {
    // Create Ticket object dynamically
    Ticket *t1 = new Ticket();

    // Delete Ticket object
    delete t1;

    return 0;
}
