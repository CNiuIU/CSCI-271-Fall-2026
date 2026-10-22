// Chenkai Niu . Assignment 4

#include <iostream> //input output library, is needed to for the tools to write this code
using namespace std; //don't have to std:: every time cout and cin 

int main()  //main function, start 
{
    int number; //declares a variable to store the menu choice
    do{ //starts the do while loop
        cout << "Enter a menu choice (1 , 2 , or 3): " << endl; //tells the user
        //to enter 1, 2, or 3.
        cin >> number; //takes user input

        if (number < 1 || number > 3){ //checks if the user input is less than 1
        // or greater than 3
            cout << "Invalid choice, try again.\n"; //if so, prints invalid choice
        }
     } while (number < 1 || number > 3); //if user input is invalid, 
        //the loop goes back to the do
        //if the user input is valid, the loop breaks (ends)
            cout << "You selected option " << number << ".\n"; //prints out success message

    
    return 0; //end
}
