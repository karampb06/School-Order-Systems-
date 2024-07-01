// lunch_order_system.cpp

#include "Headeradmin.h"

// Initialize global variables
// Store the menu items for each day of the week

map <int, vector<MenuItem>> weeklyMenu;

// Store the orders placed
vector<Order> orders;


// this Function for the admin login
bool adminLogin() {
    string adminUsername = "Admin";
    string adminPassword = "Password";
    string username, password;

    cout << "Admin Login\n";
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username == adminUsername && password == adminPassword) {
        cout << "Login successful!\n";
        return true;
    }
    else {
        cout << "Invalid username or password.\n";
        return false;
    }
}




void displayAdminMenu() {
    cout << "\n :::::: Admin Panel :::::\n";

    cout << "1. Admin Login\n";
    cout << "2. Update Menu\n";
    cout << "3. Daily Order Report\n";
    cout << "4. Weekly Sales Report\n";
    cout << "5. Weekly Pending Payment Report\n";
    cout << "6. Weekly Complaint Report\n";
    cout << "7. Exit\n";
}

void updateMenu() {
    cout << "\n ::::: Update Menu :::::\n";
    // Display current menu items
    for (const auto& day : weeklyMenu) {
        cout << "\n# Day " << day.first << " Menu:\n";
        for (const auto& item : day.second) {
            cout << "* " << item.name << " - ";
            cout << "S: $" << item.priceSmall << "  ";
            cout << "M: $" << item.priceMedium << "  ";
            cout << "L: $" << item.priceLarge << "\n";
        }
        cout << "\n\t*******************\n";
    }

    // Select the day to update in the menu, here we can do changes in day
    int day;
    cout << "Enter the day number to update (1-5): ";
    cin >> day;
    if (day < 1 && day > 5) {
        cout << "Invalid day number.\n";
        return;
    }

    // Select the menu item to update in the menu
    int itemIndex;
    cout << "Enter the item number to update (1-" << weeklyMenu[day].size() << "): ";
    cin >> itemIndex;
    if (itemIndex < 1 && itemIndex > weeklyMenu[day].size()) {
        cout << "Invalid item number.\n";
        return;
    }

    // Update the selected menu item
    cout << "Enter new prices for " << weeklyMenu[day][itemIndex - 1].name << " (S M L): ";
    double newPriceS, newPriceM, newPriceL;
    cin >> newPriceS >> newPriceM >> newPriceL;

    // Update menu item prices
    weeklyMenu[day][itemIndex - 1].priceSmall = newPriceS;
    weeklyMenu[day][itemIndex - 1].priceMedium = newPriceM;
    weeklyMenu[day][itemIndex - 1].priceLarge = newPriceL;

    cout << "Menu updated successfully!\n";
}

void dailyOrderReport() {
    cout << "\n ::::: Daily Order Report :::::\n";
    // Example: Display number of orders for each item
    for (const auto& day : weeklyMenu) {
        for (const auto& item : day.second) {
            // Generate random order count for example

            cout << item.name << ": " << rand() % 10 << " orders\n"; 
        }
    }
}

void weeklySalesReport() {
    cout << "\n :::::: Weekly Sales Report ::::::\n";
    // Example: Display total sales for the week
    double totalSales = 0.0;
    for (const auto& order : orders) {
        totalSales += order.totalPrice;
    }
    cout << "Total sales for the week: $" << fixed << setprecision(2) << totalSales << "\n";
}

void weeklyPendingPaymentReport() {
    cout << "\n=== Weekly Pending Payment Report ===\n";
    // Example: Display orders with pending payment status
    for (const auto& order : orders) {
        if (order.paymentStatus == "NP") {
            cout << "\n Order Number: " << order.orderNumber << "\n";
            cout << "\n Child Name: " << order.childName << "\n";
            cout << "\n Total Price: $" << order.totalPrice << "\n";
            cout << "\n Date: " << order.orderDate << "\n\n";
        }
    }
}
// Function to display the weekly complaint report
void weeklyComplaintReport() {
    cout << "\n=== Weekly Complaint Report ===\n";
    //  Display recent complaints
   
    cout << "Complaints (recent):\n";
    cout << "Complaint #001: Child didn't receive ordered item.\n";
    cout << "Complaint #002: Food quality was poor.\n";
}
