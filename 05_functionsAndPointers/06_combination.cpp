#include <iostream>
using namespace std;

int factorial(int x)              // Function to calculate factorial of a number x
{
    int f = 1;                   // Initialize variable f to store factorial result (starting with 1)
    
    for (int i = 1; i <= x; i++) // Loop runs from 1 to x
    {
        f = f * i;               // Multiply f with current value of i
    }
    
    return f;                    // Return the calculated factorial value
}

int main()                       // Main function where program execution starts
{
    int n;                       // Declare integer variable n
    cout << "Enter your number(n) : "; // Ask user to enter value of n
    cin >> n;                    // Take input value for n from user

    int r;                       // Declare integer variable r
    cout << "Enter your number(r) : "; // Ask user to enter value of r
    cin >> r;                    // Take input value for r from user

    int a = factorial(n);        // Call factorial function to calculate n! and store in a
    int b = factorial(r);        // Call factorial function to calculate r! and store in b
    int c = factorial(n - r);    // Call factorial function to calculate (n - r)! and store in c

    int comb = a / (b * c);      // Calculate combination using formula: nCr = n! / (r! * (n-r)!)
    
    cout << "Combination = " << comb << endl; // Display the result of combination

    return 0;                    // End of program
}