#pragma once
#pragma once
#ifndef Headerparent_h
#define Headerparent_h

#include <string>

using namespace std;

struct ParentInfo {
    string FullName;
    string Gender;
    string DOB;
    string ContactNo;
    string ChildName;
    string ChildRoomNo;
    string VisaCardNo;
    string VisaCardExpiry;
    string Username;
    string Password;
};

void registerParent();
bool loginParent();
void displayHomeScreen();

#endif //Headerparent_h