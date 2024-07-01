#pragma once
#pragma once
#ifndef Headerstaff_h
#define Headerstaff_h

#include <string>
using namespace std;
// Define a struct to hold staff information
struct staffInfo {
	string FullName;
	string Gender;
	string DOB;
	string VisaCardNo;
	string VisaCardExpiry;
	string Username;
	string Password;
};
// Function to register a new staff member
void registerstaff();
// Function to authenticate staff login, returns true if successful

bool loginstafft();

// Function to display the home screen after successful login
void displayHomeScreen();

#endif //Headerstafft_h
