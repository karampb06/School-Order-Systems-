#include "order.h"
#include <iostream>
#include <ctime>

// Definition of the orders vector to store orders
vector<Order> orders;

// Function to generate a unique identifier with a prefix and current timestamp
string generateUniqueId(const string& prefix) {
    // Obtain the current time
    time_t now = time(nullptr);
    // Create a tm structure to hold the local time
    struct tm timeinfo;
    // Convert time to local time
    localtime_s(&timeinfo, &now);
    // Buffer to hold the formatted unique identifier
    char buffer[80];
    // Format the unique identifier with the given prefix and timestamp
    strftime(buffer, sizeof(buffer), (prefix + "%Y%m%d%H%M%S").c_str(), &timeinfo);
    return string(buffer);
}

// Function to create and add a new order to the list
void createOrder() {
    Order newOrder;
    newOrder.orderNumber = generateUniqueId("ORD");
    cout << "\n\t ***********" << endl;
    // ... (Rest of the input and processing code remains unchanged)
    cout << " # Enter the Order Date (YYYY-MM-DD): ";
    cin >> newOrder.orderDate;
    cout << " # Enter the item Name: ";
    cin >> newOrder.itemName;
    cout << " # provide the details of Quantity size:: (Small/Medium/Large): ";
    cin >> newOrder.Quantity;
    cout << " # Enter the item Price $ : ";
    cin >> newOrder.Price;
    cout << " # Enter the Child Name: ";
    cin >> newOrder.childName;
    cout << " # Enter  the Classroom Number: ";
    cin >> newOrder.classroomNumber;
    cout << " # please mention your Dietary Preferences: ";
    cin >> newOrder.Dietary_Pref;

    // for payment options 
    string paymentOption;
    cout << "\n Proceed with the payment? (yes/no): ";
    cin >> paymentOption;
    newOrder.paymentStatus = (paymentOption == "yes") ? "Paid" : "Not_Paid_*pay on delivery ";

    newOrder.issuedStatus = "Pending"; // Default status

    cout << "\n\t ***********" << endl;
    orders.push_back(newOrder);

    cout << "\n ******************************************** ";
    cout << "\n        Order created successfully              ";
    cout << endl;
    cout << "\n ********************************************";
    cout << endl;

    cout << "\n\t$***** Bill *****$\n" << endl;

    cout << "\n*********************************************************** " << endl;
    cout << " * Order Number: " << newOrder.orderNumber << endl;
    cout << " * Date: " << newOrder.orderDate << endl;
    cout << " * Item Name: " << newOrder.itemName << endl;
    cout << " * Price $ : " << newOrder.Price << endl;
    cout << " * Payment status  : " << newOrder.paymentStatus << endl;
    cout << " * Student Name: " << newOrder.childName << endl;
    cout << " * Room Number: " << newOrder.classroomNumber << endl;
    cout << "\n*********************************************************** " << endl;
}
