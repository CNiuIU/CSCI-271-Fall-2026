// Chenkai Niu
// Assignment 5

#include <iostream> // need this for cout cin
using namespace std; // use cout without std:: every time

//i dont think void was taught in class but google says 
//void is a variable that we can later call on

// this is for the forward print, first item in assignement
void printForward(const int arr[], int size) { // read-only array and size will later be set
    for (int i = 0; i < size; i++) { // loops from index 0 (the first number in an array)
    //to however big the array is
        cout << arr[i] << " "; // prints the number and a space
    }
    cout << endl; // next line outside the loop so it only does it 1 time
}

// backwards printing, second item in assignment
void printReverse(const int arr[], int size) { // same thing as above but for backwards
    for (int i = size - 1; i >= 0; i--) { // starts at the last index (size - 1) and counts down to 0 by 1s (i--)
        cout << arr[i] << " "; // prints the number and a space
    }
    cout << endl; //next line 
}

// this is for the "how many numbers in the list are higher than user input"
//this is the third item in the assignment
int countAbove(const int arr[], int size, int limit) { // Accepts a read-only array, its size, and the limit value
    int counter = 0; // counter to 0 for counting how many numbers are above user input
    for (int i = 0; i < size; i++) { // loops through all the indexes, starting at 0
        if (arr[i] > limit) { // check index if it is strictly greater than the user inputted limit
            counter++; // Adds 1 to our counting count if it is higher
        } 
    } 
    return counter; // sends the total count back to the main calling function
} 

int main() { // start
    const int SIZE = 6; // tells how big the array is
    int values[SIZE] = {14, 3, 27, 9, 50, 21}; // tell what is in the array

    cout << "Forward: "; // printing the forward we had
    printForward(values, SIZE); // using the void printForward we had

    cout << "Reverse: "; // printing the reverse`
    printReverse(values, SIZE); // using the void printReverse we had

    int userLimit; // need a variable for user input 
    cout << "Count values above: "; // asks for a comparison number
    cin >> userLimit; //takes user input for the upper limit

    int itemsFound = countAbove(values, SIZE, userLimit); // Calls countAbove and stores the returned integer value
    cout << "Count: " << itemsFound << endl; // prints how many numbers are found to be above the limit

    return 0; // end
} 
