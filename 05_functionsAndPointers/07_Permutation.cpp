#include <iostream>
using namespace std;

int factorial(int x)                 // Function to calculate factorial of a number x
{
    int f = 1;                       // Variable to store factorial result, initialized with 1

    for (int i = 1; i <= x; i++)     // Loop runs from 1 to x
    {
        f = f * i;                   // Multiply f with i in each iteration
    }

    return f;                        // Return the calculated factorial value
}

int main()                           // Main function: program execution starts here
{
    int n;                           // Variable to store value of n
    cout << "Enter your number(n) : "; // Ask user to enter value of n
    cin >> n;                        // Take input for n from user

    int r;                           // Variable to store value of r
    cout << "Enter your number(r) : "; // Ask user to enter value of r
    cin >> r;                        // Take input for r from user

    int a = factorial(n);            // Call factorial function to calculate n!
    int b = factorial(n - r);        // Call factorial function to calculate (n - r)!

    int per = a / b;                 // Calculate permutation using formula n! / (n-r)!
    
    cout << "Permutation = " << per << endl; // Display the permutation result

    return 0;                        // End of program
}
