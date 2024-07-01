#pragma once
#ifndef Headerorder_h
#define Headerorder_h

#include <string>
#include <vector>

using namespace std;

// Structure to represent an order
struct Order {
    string orderNumber;
    string orderDate;
    string itemName;
    string quantity;
    double price = 0.0;
    string childName;
    string classroomNumber;
    string paymentStatus;
    string issuedStatus;
    string dietaryPref;
};

// Function declarations
string generateUniqueId(const string& prefix);
double getItemPrice(int day, int item);
void createOrder();

// Vector to store orders
extern vector<Order> orders;

#endif // Headerorder_h