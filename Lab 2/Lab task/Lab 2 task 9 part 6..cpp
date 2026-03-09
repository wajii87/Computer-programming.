#include <iostream>        // Include the library to allow input and output operations
using namespace std;       // Use the standard namespace to simplify code (no need for std::)

// Function Prototype: Renamed to MulTwo to accurately describe multiplication
int MulTwo(int x, int y);  

int main() {               // The starting point where the program begins execution
    int a, b, product;     // Declare three integer variables to hold user inputs and the final value

    // Asking for input
    cout << "Enter the first number: "; // Display a prompt to the user on the screen
    cin >> a;                           // Read the user's first input and store it in variable 'a'
    
    cout << "Enter the second number: "; // Display a prompt for the second number
    cin >> b;                            // Read the user's second input and store it in variable 'b'

    // Calling out user-defined function
    // MOD 5: Calling the renamed function 'MulTwo'
    product = MulTwo(a, b);               

    // Displaying output
    // This line prints the numbers entered and the result calculated by the MulTwo function
    cout << "The product of " << a << " and " << b << " is: " << product << endl;

    return 0;              // Tell the operating system that the program finished without errors
}

// Function Definition: Renamed and logic changed to multiplication
int MulTwo(int x, int y) { // Receives the integers 'a' and 'b' into local variables 'x' and 'y'
    return (x * y);        // TASK 9 MOD 5: Returns the result of x multiplied by y
}