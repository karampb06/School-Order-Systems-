// intro1 project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "introduction.h" 

using namespace std;

int main() {
    displayIntroduction(); // Display the introduction or header
    displayMenu(); // Display the main menu options

    int option;
    cout << "Enter the option for the task you want to do: ";
    cin >> option;

    // Switch statement to handle user's choice
    switch (option) {
    case 4:
        // Display the weekly menu
        weeklyMenu();
        break;
    case 5:
        // Display contact information and bulk discount details
        displayContactInfo();
        break;
    default:
        // Display an error message for invalid choice
        cout << "Enter the right choice!!\n";
        break;
    }

    return 0;
}