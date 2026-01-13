// Print numbers up to 1 using recursion

#include <iostream>
using namespace std;

void print(int n) // Function definition that takes an integer n
{
    if (n == 0) // Base condition: if n becomes 0
    {
        return; // Stop the recursion and return control
    }
    cout << n << endl; // Print the current value of n

    print(n - 1); // Recursive call with n-1
}

int main() // Main function where program execution starts
{
    int n; // Declare an integer variable n

    cout << "Enter Number : "; // Ask user to enter a number
    cin >> n;                  // Take input from the user

    print(n); // Call the recursive function

    return 0;
}
