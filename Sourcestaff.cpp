#include "Headerstaff.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to register a new staff member
void registerstaff() {
    // Open file in append mode
    ofstream staffRegistration("staffRegistration.txt", ios::app);

    // Check if file opened successfully
    if (!staffRegistration) {
        cout << "Error opening file." << endl;
        return;
    }

    staffInfo staff;

    // Collect staff information
    cout << "\n Enter the Staff Full Name: ";
    cin >> staff.FullName;

    cout << "\n Enter the Gender of person (M/F): ";
    cin >> staff.Gender;

    cout << "\n Enter the Date of Birth (DD/MM/YYYY): ";
    cin >> staff.DOB;

    cout << "\n Enter the Visa Card Number: ";
    cin >> staff.VisaCardNo;

    cout << "\n Enter the Visa Card Expiry Date (MM/YY): ";
    cin >> staff.VisaCardExpiry;

    cout << "\n  User name should be more than two words ";
    cout << "\n Enter a Username: ";
    cin >> staff.Username;

    cout << "\n Enter a Password: ";
    cin >> staff.Password;

    // Write staff information to file
    staffRegistration << "Full Name: " << staff.FullName << endl;
    staffRegistration << "Gender: " << staff.Gender << endl;
    staffRegistration << "Date of Birth: " << staff.DOB << endl;
    staffRegistration << "Visa Card Number: " << staff.VisaCardNo << endl;
    staffRegistration << "Visa Card Expiry Date: " << staff.VisaCardExpiry << endl;
    staffRegistration << "Username: " << staff.Username << endl;
    staffRegistration << "Password: " << staff.Password << endl;
    staffRegistration << endl;

    cout << " *************************************" << endl;
    cout << "\n staff registration successful! " << endl;
    cout << " *************************************" << endl;

    staffRegistration.close();
}

// Function to authenticate staff login
bool loginstaff() {
    // Open file for reading
    ifstream staffRegistration("staffRegistration.txt");

    if (!staffRegistration) {
        cout << "Error opening file." << endl;
        return false;
    }

    string username, password;
    cout << "\n Enter Username: ";
    cin.ignore(); // To ignore the newline character left in the buffer
    cin >> username;
    cout << "\n Enter Password: ";
    cin >> password;

    // Search for matching username and password in file
    string line;
    while (getline(staffRegistration, line)) {
        if (line.find("Username: " + username) != string::npos) {
            getline(staffRegistration, line); // Read the password line
            if (line == "Password: " + password) {
                cout << "\n **************************************************************************\n";
                cout << " \n you have Login successfully! or you can proceed with next step " << endl;
                cout << "\n **************************************************************************\n";
                staffRegistration.close();
                return true;
            }
        }
    }

    cout << "Invalid username or password! please try again ." << endl;
    staffRegistration.close();
    return false;
}

// Function to display the home screen and handle user choices
void displayHomeScreen() {
    int choice;
    do {
        // Display menu options
        cout << "\n ****** staff Portal ******\n";
        cout << " \n 1. Registerstaff\n";
        cout << "\n 2. Login staff\n";
        cout << "\n 3. Exit\n";
        cout << "\n Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To ignore the newline character left in the buffer

        // Handle user choice
        switch (choice) {
        case 1:
            registerstaff();
            break;
        case 2:
            if (loginstaff()){
                // Proceed with the next steps after successful login
            }
            break;
        case 3:
            cout << "Exiting program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);
}
