#include <iostream>
using namespace std;

int main() {

    int age;  // declare integar variable.
    char hasID;  // declare character variable.

    cout << "Enter your age: ";
    cin >> age;

    cout << "Do you have an ID card? (y/n): ";
    cin >> hasID;

    
    if (age >= 18 && hasID == 'y')  // Using logical AND (&&)
	 {
        cout << "You can enter." << endl;  // if condition is true.
    }
    else {
        cout << "Entry not allowed." << endl;  // other wise 
    }

    return 0;
}