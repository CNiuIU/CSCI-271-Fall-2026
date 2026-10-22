#include <iostream> //allows the use of input output cin cout
#include <string> //allows the use of the string class
using namespace std; //so we don't have to type std:: every line

int main() 
{
    string name; //declaring a variable called "name" to store a name string later
    double age; 
    //declaring variable "age" to store a number later (double just for decimals for weird people)
    cout << "What is your name?" <<endl; //printing the question to the user
    cin>>name; //accepting input from user, storing it in variable "name"
    cout << "What is your age?"<< endl; //printing the question to the user
    cin>>age; //accepting input from user, storing a number in "age"
    cout<<"Hello "<<name<<", seems like you are "<<age<<"."; //printing greeting
    return 0;
}