// Chenkai Niu
// Assignment 5

#include <iostream> // to use with cout and cin
using namespace std; // to use cout without the std:: 


int main() { // start
    const int SIZE = 5; // "Declare const int SIZE = 5" (these are the instructions)
    int scores[SIZE]; // "and an int array of that size."

    // "Use a for loop to read the 5 scores from the user with cin."
    for (int i = 0; i < SIZE; i++) { // loop keeps going until it hits 5 (SIZE=5, as in, 5 user inputs)
        cout << "Enter score " << (i + 1) << ": "; 
        // prints the question to ask the user for input,
        //the i+1 is just so that the question isnt just Enter score over and over,
        //instead it shows what number score you have inputted so far.
        cin >> scores[i]; //this is the cin part (needs 5 numbers from user input)
    } 

    // "Use loops to compute the sum, the highest score, 
    // and the lowest score (start your max and min from the first element)."
    // If i need loops to compute this, i need variables for the sum, highest score,
    // lowest score
    int sum = scores[0]; // sum is first user input
    int highest = scores[0]; // using first user input to later calculate if highest or not
    int lowest = scores[0]; // using first user input to calculate if lowest

    // loop to find out highest, lowest
    for (int i = 1; i < SIZE; i++) { // loop starts at i=1 because i=0 was used earlier in the scores[0]
        sum += scores[i]; // every user input added into the sum variable
        if (scores[i] > highest) { // loop that checks the current user input is higher than the last user input
            highest = scores[i]; // if the next number is bigger, updates the "highest" variable for use later when print
        }
        if (scores[i] < lowest) { // loop that checks the current input is lower than last input
            lowest = scores[i]; // if number is lower, updates the "lowest" variable for use later
        } 
    }

    // "Compute the average as a double — use static_cast<double> so the decimal part isn't lost."
    double average = static_cast<double>(sum) / SIZE; // this is where static cast is used/also to find average
    //sum of everything divided by size, which is 5, which is how many numbers user inputted

    // "Print all the scores on one line, then the sum, average, highest, and lowest, each clearly labeled."
    cout << "Scores: "; // Prints scores
    for (int i = 0; i < SIZE; i++) { // starts at 0 for scores[0], which is the first user input
    // i < SIZE because the full array is 5 slots, which means 0,1,2,3,4. no 5
        cout << scores[i] << " "; // prints the scores(user input) followed by a space
    } 
    cout << endl; // after all the scores, new line for the other info

    cout << "Sum: " << sum << endl; // Prints sum
    cout << "Average: " << average << endl; // Prints avg
    cout << "Highest: " << highest << endl; // Prints highest
    cout << "Lowest: " << lowest << endl; // Prints lowest

    return 0; // end
}
