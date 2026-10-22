// Name: Chenkai Niu
// Course: CSCI 271 01
// Assignment 3 - Problem 1

#include <iostream> // I/O library for input and output operations
using namespace std; // Dont need to std:: every line

int main() { // Main function, start point
    int temp; // makes an integer variable to hold the user's input temperature
    cout << "Enter the temperature (F): "; // Prints instructions/asks the user to enter a temperature in Fahrenheit
    cin >> temp; // reads user input and stores in temp
    if (temp < 32) { // checks if the temperature is strictly less than 32
        cout << "That's Freezing." << endl; // if it is, prints
    } else if (temp <= 59) { // checks if temperature is between 32 and 59 
        cout << "That's Cold." << endl; // if it is, prints
    } else if (temp <= 75) { // checks if temperature is between 60 and 75 
        cout << "That's Mild." << endl; // if it is, prints
    } else { // Handles any temperature that is 76 or above
        cout << "That's Hot." << endl; // prints for all temps 
    }
    return 0; // return 0 is the end
}