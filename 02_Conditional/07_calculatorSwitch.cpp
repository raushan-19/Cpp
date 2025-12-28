// Write a program to create a calculator that performs basic arithmetic operations (add, subtract, ultiply and divide) using switch case. The calculator sholud input two numbers and an operator from user.

#include <iostream>          // Includes input/output library (cout, cin)
using namespace std;         // Allows us to use cout and cin without std::

int main() {                 // Main function — program starts from here
    int n1, n2;              // Declares two integer variables to store numbers
    char op;                 // Declares a character variable to store operator (+, -, *, /)

    cin >> n1;               // Takes first number from user
    cin >> op;               // Takes operator from user
    cin >> n2;               // Takes second number from user

    switch(op) {             // Switch checks the operator and matches correct case
        case '+':            // If op is '+'
            cout << n1 + n2 << endl;  // Add numbers and print result
            break;           // Exit switch

        case '-':            // If op is '-'
            cout << n1 - n2 << endl;  // Subtract and print
            break;

        case '*':            // If op is '*'
            cout << n1 * n2 << endl;  // Multiply and print
            break;

        case '/':            // If op is '/'
            cout << n1 / n2 << endl;  // Divide and print (integer division)
            break;

        default:             // If no case matches (wrong operator)
            cout << "Invalid operator" << endl;  // Show error message
    }

} // End of main function   