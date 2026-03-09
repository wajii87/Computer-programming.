#include <iostream>        // Include the library to allow input and output operations
using namespace std;       // Use the standard namespace to simplify code (no need for std::)

// Function Prototype: Declares 'addTwo' before main so the compiler knows it exists
int addTwo(int x, int y);  

int main() {               // The starting point where the program begins execution
    int a, b, product;     // Declare three integer variables to hold user inputs and the final value

    // Asking for input
    cout << "Enter the first number: "; // Display a prompt to the user on the screen
    cin >> a;                           // Read the user's first input and store it in variable 'a'
    
    cout << "Enter the second number: "; // Display a prompt for the second number
    cin >> b;                            // Read the user's second input and store it in variable 'b'

    // Calling out user-defined function
    // Modification 2: Passing 'a' and 'b' to the function to get their product
    product = addTwo(a, b);               

    // Displaying output
    // This line prints the numbers entered and the result calculated by the function
    cout << "The product of " << a << " and " << b << " is: " << product << endl;

    return 0;              // Tell the operating system that the program finished without errors
}

// Function Definition: This is the logic requested in Modification 2
int addTwo(int x, int y) { // Receives the two integers from main() into local variables 'x' and 'y'
    return (x * y);        // TASK 9 MOD 2: The '+' is changed to '*' to perform multiplication
}