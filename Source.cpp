// hungryPoint.cpp
#include <iostream>
#include <string>
#include "introduction.h" 

using namespace std;

void displayIntroduction() {
    string appName = "\t Hungry Point ";
    cout << "=== " << appName << " ===\n\n";
}

void weeklyMenu() {
    cout << "\n\t Weekly Menu with Prices:\n";
    cout << "# Day 1 Menu:\n";
    cout << "* 1. Garlic Bread - $2.50\n";
    cout << "* 2. Chicken Salad - $4.00\n";
    cout << "* 3. Fruit Chart - $0.75\n";
    cout << "* 4. Standard Milk - $0.50\n";
    cout << "\n\t*******************\n";
    cout << "# Day 2 Menu:\n";
    cout << "* 1. Vegetarian Pizza - $5.75\n";
    cout << "* 2. Lamb Salad - $4.25\n";
    cout << "* 3. Apple Slices - $0.50\n";
    cout << "* 4. Fruit Juice - $0.75\n";
    cout << "\n\t*******************\n";
    cout << "# Day 3 Menu:\n";
    cout << "* 1. Falafel Wrap - $3.00\n";
    cout << "* 2. Brown Rice - $2.99\n";
    cout << "* 3. Wedges with Sour Cream - $1.50\n";
    cout << "* 4. Brownie - $1.00\n";
    cout << "\n\t*******************\n";
    cout << "# Day 4 Menu:\n";
    cout << "* 1. chicken and rice  - $2.50\n";
    cout << "* 2. veg korma - $1.00\n";
    cout << "* 3. Mixed Berries - $4.75\n";
    cout << "* 4. Low-fat Chocolate Milk - $0.75\n";
    cout << "\n\t*******************\n";
    cout << "# Day 5 Menu:\n";
    cout << "* 1. cheesy meatballs - $2.50\n";
    cout << "* 2. Sweet Potato chips - $1.25\n";
    cout << "* 3. Pineapple Chunks - $0.75\n";
    cout << "* 4. banana Smoothie - $1.25\n";
    cout << "\n*******************\n\n";
}

void displayContactInfo() {
    string bulkDiscount = "Discounts for Bulk Booking:";
    string contactInfo = "Contact Details and Office Locations:\n";

    cout << "\n" << bulkDiscount << "\n";
    cout << "Get 14% off for bookings of 15 meals or more!<<endl";
    cout << contactInfo;
    cout << "Phone: 024-956-8345\n";
    cout << "Email: booknicemeal.com\n";
    cout << "Address: 645 Great South Road, City- Auckland, Suburb- Otahuhu\n";
}

void displayMenu() {
    cout << "1. Login\n";
    cout << "2. Register\n";
    cout << "3. Admin Login\n";
    cout << "4. Weekly Menu\n";
    cout << "5. Contact Details\n";
}