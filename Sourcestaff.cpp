#include "Headerstaff.h"
#include <iostream>
#include <fstream>
#include <string>



using namespace std;



void registerstaff() {
	ofstream staffRegistration("staffRegistration.txt", ios::app);



	if (!staffRegistration) {
		cout << "Error opening file." << endl;
		return;
	}



	staffInfo staff;



	cout << "\n Enter the Staff Full Name: ";
	cin >> staff.FullName;



	cout << "\n Enter the Gender of person (M/F): ";
	cin >> staff.Gender;



	cout << "\n Enter the Date of Birth (DD/MM/YYYY): ";
	cin >> staff.DOB;

	cout << "\n Enter the Visa Card Number: ";
	cin >> staff.VisaCardNo;



	cout << "\n Enter the Visa Card Expiry Date (MM/YY): ";
	cin >> staff.VisaCardExpiry;


    cout << "\n  User name should be more than two words ";
	cout << "\n Enter a Username: ";
	
	cin >> staff.Username;



	cout << "\n Enter a Password: ";
	cin >> staff.Password;



	staffRegistration << "Full Name: " << staff.FullName << endl;
	staffRegistration << "Gender: " << staff.Gender << endl;
	staffRegistration << "Date of Birth: " << staff.DOB << endl;
	staffRegistration << "Visa Card Number: " << staff.VisaCardNo << endl;
	staffRegistration << "Visa Card Expiry Date: " << staff.VisaCardExpiry << endl;
	staffRegistration << "Username: " << staff.Username << endl;
	staffRegistration << "Password: " << staff.Password << endl;
	staffRegistration << endl;



	cout << " *************************************" << endl;
	cout << "\n staff registration successful! " << endl;
	cout << " *************************************" << endl;



	staffRegistration.close();
}



bool loginstaff() {
	ifstream staffRegistration("staffRegistration.txt");



	if (!staffRegistration) {
		cout << "Error opening file." << endl;
		return false;
	}



	string username, password;
	cout << "\n Enter Username: ";
	cin.ignore(); // To ignore the newline character left in the buffer
	cin >> username;
	cout << "\n Enter Password: ";
	cin >> password;



	string line;
	while (getline(staffRegistration, line)) {
		if (line.find("Username: " + username) != string::npos) {
			getline(staffRegistration, line); // Read the password line
			if (line == "Password: " + password) {
				cout << "\n **************************************************************************\n";
				cout << " \n you have Login successfully! or you can proceed with next step " << endl;
				cout << "\n **************************************************************************\n";
				staffRegistration.close();
				return true;
			}
		}
	}



	cout << "Invalid username or password! please try again ." << endl;
	staffRegistration.close();
	return false;
}



void displayHomeScreen() {
	int choice;
	do {
		cout << "\n ****** staff Portal ******\n";
		cout << " \n 1. Registerstaff\n";
		cout << "\n 2. Login staff\n";
		cout << "\n 3. Exit\n";
		cout << "\n Enter your choice: ";
		cin >> choice;
		cin.ignore(); // To ignore the newline character left in the buffer



		switch (choice) {
		case 1:
			registerstaff();
			break;
		case 2:
			if (loginstaff()){
				// Proceed with the next steps after successful login
			}
			break;
		case 3:
			cout << "Exiting program. Goodbye!\n";
			break;
		default:
			cout << "Invalid choice. Please try again.\n";
		}
	} while (choice != 3);
}