#include "Headercomplaint.h"
#include <iostream>
#include <ctime>

using namespace std;

// Function to generate a unique identifier with a prefix and current timestamp
string generateUniqueId(const string& prefix) {
    // Step 1: Get the current time
    time_t now = time(nullptr);

    // Step 2: Structure to hold the time components
    struct tm timeinfo;

    // Step 3: Convert the current time to local time and store it in timeinfo
    localtime_s(&timeinfo, &now);

    // Step 4: Buffer to store the formatted timestamp
    char buffer[80];

    // Step 5: Format the timestamp using strftime
    // %Y - Year (4 digits)
    // %m - Month (2 digits)
    // %d - Day (2 digits)
    // %H - Hour (24-hour format, 2 digits)
    // %M - Minute (2 digits)
    // %S - Second (2 digits)
    // Example format: prefix + "YYYYMMDDHHMMSS"
    strftime(buffer, sizeof(buffer), (prefix + "%Y %m %d %H %M %S ").c_str(), &timeinfo);

    // Step 6: Convert the buffer to a string and return
    return string(buffer);
}

// Function to create and add a new complaint to the list
void createComplaint() {
    Complaint newComplaint;
    newComplaint.complaintNumber = generateUniqueId("CMP");

    cout << "\n # Enter Person Full Name: ";
    cin >> newComplaint.Full_Name;

    cout << " # Enter Date of Order (YYYY-MM-DD): ";
    cin >> newComplaint.dateOfOrder;

    cout << " # Enter the name of Ordered Item: ";
    cin >> newComplaint.itemOrdered;

    cout << " # Please enter the Complaint Description: ";
    cin >> newComplaint.complaintDescription;

    cout << " # Please give your Contact Number: ";
    cin >> newComplaint.contactNumber;

    cout << " # Please provide your Email address: ";
    cin >> newComplaint.email;

    string complaint_action;
    cout << "\n * Do you know your complaint action status? (yes/no): ";
    cin >> complaint_action;

    newComplaint.actionStatus = (complaint_action == "yes") ? "responded" : "pending or under review";

    complaints.push_back(newComplaint); // Add new complaint to vector

    cout << "\n\t***** Complaint Registered Successfully *****\n" << endl;

    cout << " ************************************************************" << endl;
    cout << " * Complaint Number: " << newComplaint.complaintNumber << endl;
    cout << " * Person Full Name: " << newComplaint.Full_Name << endl;
    cout << " * Date of Order: " << newComplaint.dateOfOrder << endl;
    cout << " * Ordered Item: " << newComplaint.itemOrdered << endl;
    cout << " * Complaint Description: " << newComplaint.complaintDescription << endl;
    cout << " * Contact Number: " << newComplaint.contactNumber << endl;
    cout << " * Email Address: " << newComplaint.email << endl;
    cout << " * Action Status: " << newComplaint.actionStatus << endl;
    cout << " ************************************************************" << endl;
}

// Vector to store complaints
vector<Complaint> complaints;
