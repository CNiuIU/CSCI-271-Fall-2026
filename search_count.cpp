// Chenkai Niu
// Assignment 5

#include <iostream> // for cout and cin use
using namespace std; // dont need to use std:: every time


int main() { // start
    const int SIZE = 10; // "start with exactly this array, use const int SIZE = 10;"
    int data[SIZE] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5}; // "this array"

    int target; // "Ask the user for a target number using cin." needs a variable to store it
    cout << "Enter a number to search for: "; // "Ask the user for a target number using cin."
    cin >> target; // reads user input for target

    int foundIndex = -1; // needs a variable to store first time we see a number
    //also, "Use a sentinel (foundIndex = -1)"
        int count = 0; // "and a counter to track how many times the target appears."
        //assignment instructions

//loop for first number checking (first match) and storing how many times a number appears
    for (int i = 0; i < SIZE; i++) { // there are 10 numbers, from 0-9.
    //so we use i<SIZE which is 10.
        if (data[i] == target) { // checks if the current index = target or not, == is strictly =
            if (foundIndex == -1) { // checks if this is the very first time program sees a number
                foundIndex = i; // if first time seeing number, save
            } 
            count++; // every time we find the same number, +1
        } 
    } 

    // results
    if (foundIndex != -1) { // if the sentinel value was changed (the -1), means we found whatever number that user input
        cout << target << " first found at index " << foundIndex << endl; // prints the target number(user input) and where the number was found in the list
        cout << target << " appears " << count << " time(s)" << endl; // print how many times the number was found
    } else { // if the sentinel number stays at -1, it means the user input is not in the array
        cout << target << " was not found." << endl; // prints number not found
    }

    return 0; // end
} 

