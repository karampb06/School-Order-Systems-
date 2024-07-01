#include <iostream>
#include "introHeader.h"

using namespace std;

int main() {
    // Variable to store user choice
    int choice;

    // Loop to display the home screen after each option is selected
    while (true) {
        // Display the introduction screen
        showIntroductionScreen();

        // Get user input for login/registration options
        cout << "\nEnter your choice: ";
        cin >> choice;

        // Use switch case to handle different options
        switch (choice) {
        case 1:
            cout << "\nParent Login selected.\n";
            // Add code for parent login
            break;
        case 2:
            cout << "\n Staff Login selected.\n";
            // Add code for staff login
            break;
        case 3:
            cout << "\nRegister as Parent selected.\n";
            // Add code for parent registration
            break;
        case 4:
            cout << "\nRegister as Staff selected.\n";
            // Add code for staff registration
            break;
        case 5:
            cout << "Admin Login selected.\n";
            // Add code for admin login
            break;
        case 6:
            cout << "\nmake a order.\n";
            return 0; // Exit the program
        case 7:
            cout << "\n Exiting the application.\n";
            return 0; // Exit the program
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    }

    return 0;
}
