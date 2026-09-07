#include <iostream> //i think iostream includes string as well
#include <string>
using namespace std;
 
int main() {
    string name;
    cout << "Hello, world!"<< endl;
    cout << "What is your name? "<< endl;
    cin >> name;
    cout << "Hello " << name<<"!";
    return 0;
}
