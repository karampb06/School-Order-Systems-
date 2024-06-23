// staff Registration main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include "Headerstaff.h" // Include the header file

using namespace std;

int main() {
    StaffMember newStaff;
    registerStaff(newStaff);

    // Display the registered staff member's information
    cout << "\n ************************************************************* ";
    cout << endl;
    cout << "\n * Staff Member Information \n";
    cout << "\n * Full Name: " << newStaff.fullName << endl;
    cout << "\n * Gender: " << newStaff.gender << endl;
    cout << "\n * Date of Birth: " << newStaff.dateOfBirth << endl;
    cout << "\n * Visa Card Number: " << newStaff.visaCardNumber << endl;
    cout << "\n * Visa Card Expiry Date: " << newStaff.visaExpiry << endl;
    cout << endl;
    cout << "\n *************************************************************";
    return 0;
}