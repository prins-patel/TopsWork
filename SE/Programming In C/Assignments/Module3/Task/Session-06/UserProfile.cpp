/*Refactor the following code so that the user’s phone number in the UserProfile class is private and can only be set or retrieved using public methods.<br><br><em><strong>Hint:</strong> Add private access modifier to the phone number and create setPhoneNumber() and getPhoneNumber() methods.</em>*/

#include <iostream>
#include <string>
using namespace std;

class UserProfile {
private:
    string phoneNumber; // Private member

public:
    // Setter method
    void setPhoneNumber(string phone) {
        phoneNumber = phone;
    }

    // Getter method
    string getPhoneNumber() {
        return phoneNumber;
    }
};

int main() {
    UserProfile user;

    // Set phone number using public method
    user.setPhoneNumber("9876543210");

    // Get phone number using public method
    cout << "Phone Number: " << user.getPhoneNumber() << endl;

    return 0;
}
