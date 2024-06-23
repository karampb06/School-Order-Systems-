#pragma once
#pragma once
#ifndef STAFFMEMBER_H
#define STAFFMEMBER_H

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
void registerStaff(StaffMember& staff);

#endif // STAFFMEMBER_H