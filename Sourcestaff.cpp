
// this is a source part 
#include <iostream>
#include <string>

using namespace std;

// Struct to store staff member's information
struct StaffMember {
    string fullName;
    char gender;
    string dateOfBirth;
    string visaCardNumber;
    string visaExpiry;
};

// Function to register a new staff member
void registerStaff(StaffMember& staff) {
    cout << endl;
    cout << " \n Enter the staff member's full name: ";
    getline(cin, staff.fullName);
    // Here we going the staff details

    cout << "\n Enter the staff member's gender (M/F): ";
    cin >> staff.gender;

    cout << "\n Enter the staff member's date of birth (DD/MM/YYYY): ";
    cin >> staff.dateOfBirth;

    cout << "\n Enter the staff member's visa card number: ";
    cin >> staff.visaCardNumber;

    cout << "\n Enter the staff member's visa card expiry date of expiry : (MM/YYYY): ";
    cin >> staff.visaExpiry;
    cout << endl;
    cout << "\n Staff Registration has  successfully Completed ";
    cout << endl;
}