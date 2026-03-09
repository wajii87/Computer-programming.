#include <iostream>
using namespace std;

int main() {

    int age;  // declares variable.

    cout << "Enter your age: ";  // ask user to input age.
    cin >> age;  // take input in variable.

    if (age >= 18)  // condition if age is equal or greater than 18.
	 {
        cout << "You are eligible to vote." << endl;  // if condition is true. this message will print.
    }
    else {
        cout << "You are not eligible to vote." << endl;  // otherwise this one will print.
    }

    return 0;
}