#pragma once
// lunch_order_system.h

#ifndef LUNCH_ORDER_SYSTEM_H
#define LUNCH_ORDER_SYSTEM_H

#include <iostream>  // For standard input and output operations
#include <fstream>   // For file input and output operations
#include <vector>    // For using the vector container
#include <iomanip>   // For input and output manipulations (e.g., setting precision)
#include <map>       // For using the map container
#include <string>    // For using the string class


using namespace std;

// Function prototypes
bool adminLogin();
void displayAdminMenu();
void updateMenu();
void dailyOrderReport();
void weeklySalesReport();
void weeklyPendingPaymentReport();
void weeklyComplaintReport();

// Define structures for menu items and orders
struct MenuItem {
    string name;
    double priceSmall;
    double priceMedium;
    double priceLarge;
};

struct Order {
    int orderNumber;
    string orderDate;
    string itemName;
    string childName;
    int quantity;
    double totalPrice;
    string paymentStatus;
};
struct Order {
    int orderNumber;
    string orderDate;
    string itemName;
   
};

// Global variables
extern map<int, vector<MenuItem>> weeklyMenu; // Store weekly menu
extern vector<Order> orders;                  // Store orders

#endif // LUNCH_ORDER_SYSTEM_H
