// Check if a number is composite or prime.
// Composite :- If number has extra factor except 1 and itself.

#include <iostream>              
using namespace std;             

int main()                       /
{
    int n;                       // Declare an integer variable 'n' to store user input

    cout << "Enter n : ";        // Display message asking user to enter a number
    cin >> n;                    // Read the number entered by the user and store it in 'n'

    bool flag = true;            // Assume number is prime initially (true = prime)

    for (int i = 2; i <= n / 2; i++)   // Loop from 2 up to n/2 to check possible factors
    {
        if (n % i == 0)               // If remainder becomes 0, 'i' is a factor of 'n'
        {
            flag = false;             // Set flag to false (means number is NOT prime)
            break;                    // Exit loop early because we already found a factor
        }
    }

    if (n == 1)                       // Special case: 1 is neither prime nor composite
        cout << "Neither prime nor composite";
    else if (flag == true)            // If flag is still true, no factor was found
        cout << "Prime";              // So the number is prime
    else                              // Otherwise, a factor was found
        cout << "Composite";          // So the number is composite
}