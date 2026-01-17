// Print the sum from 01 to N.

#include <iostream>
using namespace std;

int sum(int n)
{                          // Function definition: sum() takes an integer n as parameter
    if (n == 0)            // Base condition: if n becomes 0
        return 0;          // Stop recursion and return 0
    return n + sum(n - 1); // Recursive call: add n to the sum of numbers from (n-1)
}

int main()
{                         // Main function: program execution starts from here
    int x;                // Variable to store user input
    cout << "Enter x : "; // Ask the user to enter a value
    cin >> x;             // Read the value entered by the user
    cout << sum(x);       // Call sum() function and print the returned result
}
