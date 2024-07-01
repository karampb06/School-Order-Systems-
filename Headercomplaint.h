#pragma once
#ifndef COMPLAINT_H
#define COMPLAINT_H

#include <string>
#include <vector>

using namespace std;

// Structure to represent a complaint
struct Complaint {
    string complaintNumber;
    string Full_Name;
    string dateOfOrder;
    string itemOrdered;
    string complaintDescription;
    string contactNumber;
    string email;
    string actionStatus;
};

// Function prototype to generate a unique identifier with a prefix and current timestamp
string generateUniqueId(const string& prefix);

// Function prototype to create and add a new complaint to the list
void createComplaint();

// Vector to store complaints
extern vector<Complaint> complaints;

#endif // COMPLAINT_H
