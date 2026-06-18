#include <iostream>
#include <string>

using namespace std;

// Struct to hold order data
struct FoodOrderData {
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder {
private:
    int orderId;
    string restaurantName;
    bool isDelivered;

public:
    // Constructor takes a FoodOrderData object
    FoodOrder(const FoodOrderData& data) {
        orderId = data.orderId;
        restaurantName = data.restaurantName;
        isDelivered = data.isDelivered;
    }

    void display() {
        cout << "Order ID: " << orderId << endl;
        cout << "Restaurant: " << restaurantName << endl;
        cout << "Delivered: "
             << (isDelivered ? "Yes" : "No")
             << endl;
    }
};

int main() {
    // Create data object
    FoodOrderData orderData = {
        101,
        "Pizza Palace",
        true
    };

    // Pass object to constructor
    FoodOrder order(orderData);

    order.display();

    return 0;
}
