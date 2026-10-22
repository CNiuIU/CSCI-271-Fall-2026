// Chenkai Niu . Assignment 4

#include <iostream> //input output library, is needed to for the tools to write this code
using namespace std; //don't have to std:: every time cout and cin 

int main()  //main function, start 
{
    int number; //declares a variable to hold a whole number
    cout << "Enter a whole number: " << endl; //asks user for whole number, prints request
    cin >> number; //takes user input
    for (int i=1; i<=10; i++){ //starts loop, starts at 1, 
    //repeats as long as i is less than or equal to 10, adds 1 to i each cycle
        cout << number << " x " << i << " = " << (number*i) << "\n"; //formatting for the times table,
        // with the user input "number" x (this is multiplication) i (which starts at at 1, goes to 10)
        //the i goes from 1 to 10 based on the loop. 
        // = number*i (this is the actual math)
        // \n at the end to go to next line (next multiplication)
    }
    return 0; //end
}
