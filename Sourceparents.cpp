#include "Headerparent.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void registerParent() {
    ofstream ParentsRegistration("ParentRegistration.txt", ios::app);

    if (!ParentsRegistration) {
        cout << "Error opening file." << endl;
        return;
    }

    ParentInfo parent;

    cout << "\n Enter the Parent's Full Name: ";
    cin >> parent.FullName;

    cout << "\n Enter the Gender of person (M/F): ";
    cin >> parent.Gender;

    cout << "\n Enter the Date of Birth (DD/MM/YYYY): ";
    cin >> parent.DOB;

    cout << "\n Enter the Contact Number: ";
    cin >> parent.ContactNo;

    cout << "\n Enter the Child's Name: ";
    cin >> parent.ChildName;

    cout << "\n Enter Children Room Number: ";
    cin >> parent.ChildRoomNo;

    cout << "\n Enter the Visa Card Number: ";
    cin >> parent.VisaCardNo;

    cout << "\n Enter the Visa Card Expiry Date (MM/YY): ";
    cin >> parent.VisaCardExpiry;

    cout << "\n Enter a Username: ";
    cin >> parent.Username;

    cout << "\n Enter a Password: ";
    cin >> parent.Password;

    ParentsRegistration << "Full Name: " << parent.FullName << endl;
    ParentsRegistration << "Gender: " << parent.Gender << endl;
    ParentsRegistration << "Date of Birth: " << parent.DOB << endl;
    ParentsRegistration << "Contact Number: " << parent.ContactNo << endl;
    ParentsRegistration << "Child's Name: " << parent.ChildName << endl;
    ParentsRegistration << "Child's Room Number: " << parent.ChildRoomNo << endl;
    ParentsRegistration << "Visa Card Number: " << parent.VisaCardNo << endl;
    ParentsRegistration << "Visa Card Expiry Date: " << parent.VisaCardExpiry << endl;
    ParentsRegistration << "Username: " << parent.Username << endl;
    ParentsRegistration << "Password: " << parent.Password << endl;
    ParentsRegistration << endl;

    cout << " *************************************" << endl;
    cout << "\n Parents registration successful! " << endl;
    cout << " *************************************" << endl;

    ParentsRegistration.close();
}

bool loginParent() {
    ifstream ParentsRegistration("ParentRegistration.txt");

    if (!ParentsRegistration) {
        cout << "Error opening file." << endl;
        return false;
    }

    string username, password;
    cout << "\n Enter Username: ";
    cin.ignore(); // To ignore the newline character left in the buffer
    getline(cin, username);
    cout << "\n Enter Password: ";
    getline(cin, password);

    string line;
    while (getline(ParentsRegistration, line)) {
        if (line.find("Username: " + username) != string::npos) {
            getline(ParentsRegistration, line); // Read the password line
            if (line == "Password: " + password) {
                cout << "Login successful!" << endl;
                ParentsRegistration.close();
                return true;
            }
        }
    }

    cout << "Invalid username or password." << endl;
    ParentsRegistration.close();
    return false;
}

void displayHomeScreen() {
    int choice;
    do {
        cout << "\n ****** Parent Portal ******\n";
        cout << " \n 1. Register Parent\n";
        cout << "\n 2. Login Parent\n";
        cout << "\n 3. Exit\n";
        cout << "\n Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To ignore the newline character left in the buffer

        switch (choice) {
        case 1:
            registerParent();
            break;
        case 2:
            if (loginParent()) {
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