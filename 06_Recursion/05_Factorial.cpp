#include <iostream>
using namespace std;

int factorial(int n)               // Function definition that calculates factorial of a number n
{
    if (n == 1 || n == 0)           // Base condition: factorial of 0 or 1 is always 1
    {
        return 1;                  // Return 1 to stop further recursive calls
    }
    return n * factorial(n - 1);   // Recursive call: n multiplied by factorial of (n-1)
                                   // Example: 5 * factorial(4)
}

int main()                         // Main function: program execution starts from here
{
    int n;                         
    cout << "Enter n : ";          
    cin >> n;                      
    cout << factorial(n);          // Call factorial function and print the returned result
}
