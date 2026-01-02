#include <iostream>            
using namespace std;           
int main()                     
{
    int n;                     // Declare an integer variable 'n'
    cout << "Enter n : ";      // Ask the user to enter a value
    cin >> n;                  // Read the input value from the user and store it in 'n'

    // Start a for loop that begins from n/2 and goes down to 1
    // We start from n/2 because no proper divisor of n can be greater than n/2
    for (int i = n / 2; i >= 1; i--)
    {
        // Check if current value of i divides n completely (no remainder)
        if (n % i == 0)
        {
            cout << i << " ";  // Print the first (largest) divisor found
            break;             // Stop the loop after finding the first divisor
            // "break" is used to get out of the loop immediately
        }
    }
}                               