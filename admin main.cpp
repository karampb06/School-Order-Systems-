#include "Headeradmin.h"

// Initialize global variables
map<int, vector<MenuItem>> weeklyMenu;
vector<Order> orders;

int main() {
    // Admin login loop
    bool loggedIn = false;
    do {
        loggedIn = adminLogin();
    } while (!loggedIn);

    // Once logged in, continue with the admin panel options
    int choice;
    do {
        displayAdminMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear newline from input buffer

        switch (choice) {
        case 1:
            updateMenu();
            break;
        case 2:
            dailyOrderReport();
            break;
        case 3:
            weeklySalesReport();
            break;
        case 4:
            weeklyPendingPaymentReport();
            break;
        case 5:
            weeklyComplaintReport();
            break;
        case 6:
            cout << "Exiting admin panel.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != 6);

    return 0;
}

bool adminLogin() {
    string username, password;
    cout << "Admin Login\n";
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    // Compare entered username and password with the admin credentials
    if (username == "admin" && password == "password") {
        cout << "Login successful!\n";
        return true;
    }
    else {
        cout << "Login failed. Incorrect username or password.\n";
        return false;
    }
}

void displayAdminMenu() {
    cout << "\n :::::: Admin Panel :::::\n";
    cout << "1. Update Menu\n";
    cout << "2. Daily Order Report\n";
    cout << "3. Weekly Sales Report\n";
    cout << "4. Weekly Pending Payment Report\n";
    cout << "5. Weekly Complaint Report\n";
    cout << "6. Exit\n";
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

    // Select the day to update in the menu
    int day;
    cout << "Enter the day number to update (1-5): ";
    cin >> day;
    if (day < 1 || day > 5) {
        cout << "Invalid day number.\n";
        return;
    }

    // Select the menu item to update in the menu
    int itemIndex;
    cout << "Enter the item number to update (1-" << weeklyMenu[day].size() << "): ";
    cin >> itemIndex;
    if (itemIndex < 1 || itemIndex > weeklyMenu[day].size()) {
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
            cout << item.name << ": " << rand() % 10 << " orders\n"; // Dummy data
        }
    }
}

void weeklySalesReport() {
    cout << "\n=== Weekly Sales Report ===\n";
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
            cout << "Order Number: " << order.orderNumber << "\n";
            cout << "Child Name: " << order.childName << "\n";
            cout << "Total Price: $" << order.totalPrice << "\n";
            cout << "Date: " << order.orderDate << "\n\n";
        }
    }
}

void weeklyComplaintReport() {
    cout << "\n=== Weekly Complaint Report ===\n";
    // Example: Display recent complaints
    // You would need to read from a file/database for actual implementation
    cout << "Complaints (recent):\n";
    cout << "Complaint #001: Child didn't receive ordered item.\n";
    cout << "Complaint #002: Food quality was poor.\n";
}
