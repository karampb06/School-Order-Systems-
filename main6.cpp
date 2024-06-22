// main.cpp

#include <iostream>
#include "ComplaintScreen.h"

using namespace std;

int main() {
    // Initialize variables for complaint details
    int complaintNumber = generateComplaintNumber();
    string fullName, itemOrdered, complaintDescription, contactNumber, email;

    // Input person's full name
    cout << " ...................................................";
    cout << "\n * Enter your full name: ";
    getline(cin, fullName);

    // Input item ordered
    cout << "\n * Please enter item ordered: ";
    getline(cin, itemOrdered);

    // Input complaint description
    cout << "\n * Enter your complaint description: ";
    getline(cin, complaintDescription);

    // Input contact number
    cout << "\n * Enter your contact number: ";
    getline(cin, contactNumber);

    // Input email
    cout << "\n * Please enter your valid email id: ";
    getline(cin, email);
    cout << " ...................................................." << endl;
    cout << endl;

    // Display complaint details
    cout << " ****************************************************";
    cout << "\n\n * Complaint Details:\n";
    cout << "\n * Complaint Number: " << complaintNumber << endl;
    cout << "\n * Person's Full Name: " << fullName << endl;
    cout << "\n * Item Ordered: " << itemOrdered << endl;
    cout << "\n * Complaint Description: " << complaintDescription << endl;
    cout << "\n * Contact Number: " << contactNumber << endl;
    cout << "\n * Email: " << email << endl;
    cout << " ****************************************************" << endl;
    cout << " ---------------------------------------------------" << endl;
    cout << "\n\t Thank you for submitting the complaint!\n" << endl;
    cout << " ---------------------------------------------------";

    return 0;
}
