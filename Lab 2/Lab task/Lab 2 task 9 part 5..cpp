#include <iostream>        // Include the library to allow input and output operations
using namespace std;       // Use the standard namespace to simplify code (no need for std::)

// Function Prototype: Renamed to subTwo to accurately describe subtraction
int subTwo(int x, int y);  

int main() {               // The starting point where the program begins execution
    int a, b, difference;  // Declare three integer variables to hold user inputs and the final value

    // Asking for input
    cout << "Enter the first number: "; // Display a prompt to the user on the screen
    cin >> a;                           // Read the user's first input and store it in variable 'a'
    
    cout << "Enter the second number: "; // Display a prompt for the second number
    cin >> b;                            // Read the user's second input and store it in variable 'b'

    // Calling out user-defined function
    // MOD 4: Calling the renamed function 'subTwo' instead of 'addTwo'
    difference = subTwo(a, b);               

    // Displaying output
    // This line prints the numbers entered and the result calculated by the subTwo function
    cout << "The difference between " << a << " and " << b << " is: " << difference << endl;

    return 0;              // Tell the operating system that the program finished without errors
}

// Function Definition: Renamed and logic changed to subtraction
int subTwo(int x, int y) { // Receives the integers 'a' and 'b' into local variables 'x' and 'y'
    return (x - y);        // TASK 9 MOD 4: Returns the result of x minus y
}