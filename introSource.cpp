#include <iostream>
#include "introHeader.h"

using namespace std;

void showIntroductionScreen() {
    // Application name
    string appName = "School Lunch Order System";
    cout << "\n\t Welcome to " << appName << "!\n";

    // Weekly menu
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
    cout << "* 1. Chicken and Rice - $2.50\n";
    cout << "* 2. Veg Korma - $1.00\n";
    cout << "* 3. Mixed Berries - $4.75\n";
    cout << "* 4. Low-fat Chocolate Milk - $0.75\n";
    cout << "\n\t*******************\n";
    cout << "# Day 5 Menu:\n";
    cout << "* 1. Cheesy Meatballs - $2.50\n";
    cout << "* 2. Sweet Potato Chips - $1.25\n";
    cout << "* 3. Pineapple Chunks - $0.75\n";
    cout << "* 4. Banana Smoothie - $1.25\n";
    cout << "\n\t*******************\n";

    // Discounts for bulk booking
    string bulkDiscount = "Discounts for Bulk Booking:";
    cout << "\n" << bulkDiscount << "\n";
    cout << "Get 14% off for bookings of 15 meals or more!\n";

    // Contact details and office locations
    string contactInfo = "Contact Details and Office Locations:\n";
    cout << contactInfo;
    cout << "Phone: 024-956-8345\n";
    cout << "Email: booknicemeal.com\n";
    cout << "Address: 645 Great South Road, City- Auckland, Suburb- Otahuhu\n";

    // Login and registration options
    cout << "\nLogin and Registration Options:\n";
    cout << "1. Parent Login\n";
    cout << "2. Staff Login\n";
    cout << "3. Register as Parent\n";
    cout << "4. Register as Staff\n";
    cout << "5. Admin Login\n";
    cout << "6. Exit\n"; // Option to exit the loop
}

