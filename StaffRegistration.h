#pragma once
#ifndef STAFFMEMBER_H
#define STAFFMEMBER_H

#include <string>

// Struct to store staff member's information
struct StaffMember {
    std::string fullName;
    char gender;
    std::string dateOfBirth;
    std::string visaCardNumber;
    std::string visaExpiry;
};

// Function to register a new staff member
void registerStaff(StaffMember& staff);

#endif // STAFFMEMBER_H
