#include <iostream>        // Include the library for input and output operations
using namespace std;       // Use the standard namespace to avoid typing 'std::' repeatedly

// Function Prototype: Tells the compiler that a function named 'addTwo' exists
int addTwo(int x, int y);  

int main() {               // The main entry point of the program
    int a, b, sum;         // Declare three integer variables to store user input and the result

    // Asking for input
    cout << "Enter the first number: "; // Print a message to the console
    cin >> a;                           // Read the first integer from the user and store it in 'a'
    
    cout << "Enter the second number: "; // Print a message asking for the second number
    cin >> b;                            // Read the second integer and store it in 'b'

    // Calling out user-defined function
    sum = addTwo(a, b);     // Pass 'a' and 'b' to the function and store the returned value in 'sum'

    // Displaying output
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl; // Print the final result

    return 0;               // Signal to the operating system that the program finished successfully
}

// Function Definition: This is where the actual math happens
int addTwo(int x, int y) {  // Receives two integers (x and y) as parameters
    return (x + y);         // Adds the two numbers and sends the result back to main()
}