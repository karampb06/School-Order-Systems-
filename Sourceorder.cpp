#include "Headerorder.h"
#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

// Vector to store orders
vector<Order> orders;

// Function to generate a unique identifier with a prefix and current timestamp
string generateUniqueId(const string& prefix) {
    time_t now = time(nullptr);
    struct tm timeinfo;
    localtime_s(&timeinfo, &now);
    char buffer[80];
    strftime(buffer, sizeof(buffer), (prefix + "%Y%m%d%H%M%S").c_str(), &timeinfo);
    return string(buffer);
}

// Function to get item price based on the day and item number
double getItemPrice(int day, int item) {
    switch (day) {
    case 1:
        switch (item) {
        case 1: return 2.50;
        case 2: return 4.00;
        case 3: return 0.75;
        case 4: return 0.50;
        }
    case 2:
        switch (item) {
        case 1: return 5.75;
        case 2: return 4.25;
        case 3: return 0.50;
        case 4: return 0.75;
        }
    case 3:
        switch (item) {
        case 1: return 3.00;
        case 2: return 2.99;
        case 3: return 1.50;
        case 4: return 1.00;
        }
    case 4:
        switch (item) {
        case 1: return 2.50;
        case 2: return 1.00;
        case 3: return 4.75;
        case 4: return 0.75;
        }
    case 5:
        switch (item) {
        case 1: return 2.50;
        case 2: return 1.25;
        case 3: return 0.75;
        case 4: return 1.25;
        }
    default:
        return 0.0;
    }
}

// Function to create and add a new order to the list
void createOrder() {
    Order newOrder;
    newOrder.orderNumber = generateUniqueId("ORD");

    // Get current date
    time_t now = time(nullptr);
    struct tm timeinfo;
    localtime_s(&timeinfo, &now);
    char dateBuffer[80];
    strftime(dateBuffer, sizeof(dateBuffer), "%Y-%m-%d", &timeinfo);
    newOrder.orderDate = string(dateBuffer);

    cout << " \n\t Welcome to food ordering system\n";
    cout << "\n\t ********************************" << endl;

    // Get day number from user
    cout << " # Enter the day number (1-5): ";
    int day;
    cin >> day;
    if (day < 1 || day > 5) {
        cout << "Invalid day number!\n";
        return;
    }

    // Display menu based on the day
    switch (day) {
    case 1:
        cout << "* 1. Garlic Bread - $2.50\n";
        cout << "* 2. Chicken Salad - $4.00\n";
        cout << "* 3. Fruit Chart - $0.75\n";
        cout << "* 4. Standard Milk - $0.50\n";
        break;
    case 2:
        cout << "* 1. Vegetarian Pizza - $5.75\n";
        cout << "* 2. Lamb Salad - $4.25\n";
        cout << "* 3. Apple Slices - $0.50\n";
        cout << "* 4. Fruit Juice - $0.75\n";
        break;
    case 3:
        cout << "* 1. Falafel Wrap - $3.00\n";
        cout << "* 2. Brown Rice - $2.99\n";
        cout << "* 3. Wedges with Sour Cream - $1.50\n";
        cout << "* 4. Brownie - $1.00\n";
        break;
    case 4:
        cout << "* 1. Chicken and Rice - $2.50\n";
        cout << "* 2. Veg Korma - $1.00\n";
        cout << "* 3. Mixed Berries - $4.75\n";
        cout << "* 4. Low-fat Chocolate Milk - $0.75\n";
        break;
    case 5:
        cout << "* 1. Cheesy Meatballs - $2.50\n";
        cout << "* 2. Sweet Potato Chips - $1.25\n";
        cout << "* 3. Pineapple Chunks - $0.75\n";
        cout << "* 4. Banana Smoothie - $1.25\n";
        break;
    default:
        cout << "Invalid day number!\n";
        return;
    }

    cout << endl;
    cout << "\n *****order*****\n";
    cout << endl;

    // Get item number from user
    cout << " # Enter the item number (1-4): ";
    int itemName;
    cin >> itemName;
    if (itemName < 1 || itemName > 4) {
        cout << "Invalid item number!\n";
        return;
    }

    // Set item name based on day and item number
    switch (day) {
    case 1:
        switch (itemName) {
        case 1: newOrder.itemName = "Garlic Bread"; break;
        case 2: newOrder.itemName = "Chicken Salad"; break;
        case 3: newOrder.itemName = "Fruit Chart"; break;
        case 4: newOrder.itemName = "Standard Milk"; break;
        }
        break;
    case 2:
        switch (itemName) {
        case 1: newOrder.itemName = "Vegetarian Pizza"; break;
        case 2: newOrder.itemName = "Lamb Salad"; break;
        case 3: newOrder.itemName = "Apple Slices"; break;
        case 4: newOrder.itemName = "Fruit Juice"; break;
        }
        break;
    case 3:
        switch (itemName) {
        case 1: newOrder.itemName = "Falafel Wrap"; break;
        case 2: newOrder.itemName = "Brown Rice"; break;
        case 3: newOrder.itemName = "Wedges with Sour Cream"; break;
        case 4: newOrder.itemName = "Brownie"; break;
        }
        break;
    case 4:
        switch (itemName) {
        case 1: newOrder.itemName = "Chicken and Rice"; break;
        case 2: newOrder.itemName = "Veg Korma"; break;
        case 3: newOrder.itemName = "Mixed Berries"; break;
        case 4: newOrder.itemName = "Low-fat Chocolate Milk"; break;
        }
        break;
    case 5:
        switch (itemName) {
        case 1: newOrder.itemName = "Cheesy Meatballs"; break;
        case 2: newOrder.itemName = "Sweet Potato Chips"; break;
        case 3: newOrder.itemName = "Pineapple Chunks"; break;
        case 4: newOrder.itemName = "Banana Smoothie"; break;
        }
        break;
    default:
        cout << "Invalid item number!\n";
        return;
    }

    // Get order details from user
    cout << " # Provide the details of Quantity size (Small/Medium/Large): ";
    cin >> newOrder.quantity;
    cout << " # Enter the Child Name: ";
    cin >> newOrder.childName;
    cout << " # Enter the Classroom Number: ";
    cin >> newOrder.classroomNumber;
    cout << " # Please mention your Dietary Preferences: ";
    cin >> newOrder.dietaryPref;

    // Set price based on day and item
    newOrder.price = getItemPrice(day, itemName);

    // Get payment status
    string paymentOption;
    cout << "\n Proceed with the payment? (yes/no): ";
    cin >> paymentOption;
    newOrder.paymentStatus = (paymentOption == "yes") ? "Paid" : "Not_Paid_*pay on delivery ";
    newOrder.issuedStatus = "Pending";

    // Add order to the list
    orders.push_back(newOrder);

    // Display order confirmation and bill
    cout << "\n\t ***********" << endl;
    cout << "\n ******************************************** ";
    cout << "\n Order created successfully ";
    cout << endl;
    cout << "\n ********************************************";
    cout << endl;
    cout << "\n\t$***** Bill *****$\n" << endl;
    cout << "\n ******************************************************************\n";
    cout << "\n Order Number: " << newOrder.orderNumber << endl;
    cout << "\n Order Date: " << newOrder.orderDate << endl;
    cout << "\n Item: " << newOrder.itemName << endl;
    cout << "\n Quantity: " << newOrder.quantity << endl;
    cout << "\n Price: $" << newOrder.price << endl;
    cout << "\n Child Name: " << newOrder.childName << endl;
    cout << "\n Classroom Number: " << newOrder.classroomNumber << endl;
    cout << "\n Payment Status: " << newOrder.paymentStatus << endl;
    cout << "\n Issued Status: " << newOrder.issuedStatus << endl;
    cout << "\n Dietary Preferences: " << newOrder.dietaryPref << endl;
    cout << "\n ******************************************************************\n";
    cout << endl;
}