// Name: Chenkai Niu
// Course: CSCI 271 01
// Assignment 3 - Problem 2

#include <iostream> // I/O library for input and output operations
using namespace std; // Dont need to std:: every line

int main() { // Main function, start point
    int age; // makes an integer variable to store the user's age
    int isMember; // makes an integer variable to store membership status (1 = yes, 0 = no)
    cout << "Enter your age: "; // prints question/command for the user to enter their age
    cin >> age; // reads the age input from the user and stores into the age variable
    cout << "Are you a member? (1 = yes, 0 = no): "; // asks user for their membership status
    cin >> isMember; // reads the membership response and stores into the isMember variable
    if (age >= 60 || (age >= 18 && isMember == 1)) { // checks if age is 60+ OR || (18+ AND && a member, needs == to check for input of 1)
        cout << "You qualify for the discount." << endl; // if either pass, print
    } else { // if the user does not meet either qualification condition
        cout << "You do not qualify for the discount." << endl; // prints rejection message
    }
    return 0; // return 0 is end
}
