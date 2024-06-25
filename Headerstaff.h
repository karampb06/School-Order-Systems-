#pragma once
#pragma once
#ifndef Headerstaff_h
#define Headerstaff_h



#include <string>

using namespace std;

struct staffInfo {
	string FullName;
	string Gender;
	string DOB;
	string VisaCardNo;
	string VisaCardExpiry;
	string Username;
	string Password;
};



void registerstaff();
bool loginstafft();
void displayHomeScreen();



#endif //Headerstafft_h