#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>

using namespace std;

// Structure to represent an order
struct Order {
    string orderNumber;
    string orderDate;
    string itemName;
    string Quantity;
    double Price;
    string childName;
    string classroomNumber;
    string paymentStatus;
    string issuedStatus;
    string Dietary_Pref;
};

// Function to generate a unique identifier with a prefix and current timestamp
string generateUniqueId(const string& prefix);

// Function to create and add a new order to the list
void createOrder();

// Declaration of the orders vector to store orders
extern vector<Order> orders;

#endif // ORDER_H
