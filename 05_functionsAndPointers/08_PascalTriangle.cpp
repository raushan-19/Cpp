// Print Pascal's Triangle :- 1
//                            1 1
//                            1 2 1
//                            1 3 3 1
//                            1 4 6 4 1
//                            1 5 10 10 5 1

#include <iostream>
using namespace std;

int factorial(int x)         // Function to calculate factorial of a number
{
    int f = 1;               // Variable to store factorial result, initialized to 1
    for (int i = 1; i <= x; i++) // Loop from 1 to x
    {
        f = f * i;           // Multiply f with i to calculate factorial
    }
    return f;                // Return the factorial value
}

int combination(int n, int r) // Function to calculate combination (nCr)
{
    int x = factorial(n);    // Calculate factorial of (n!)
    int y = factorial(r);    // Calculate factorial of (r!)
    int z = factorial(n - r);// Calculate factorial of (n-r)!
    return x / (y * z);      // Return nCr = n! / (r! * (n-r)!)
}

int main()
{
    int n;                               
    cout << "Enter you number : ";       
    cin >> n;                            

    for (int i = 0; i <= n; i++)         // Loop for each row (0 to n)
    {
        for (int s = 1; s <= n - i; s++) // Loop to print spaces for alignment
        {
            cout << " ";                 // Print one space
        }

        for (int j = 0; j <= i; j++)     // Loop to print elements in each row
        {
            cout << combination(i, j)<< " ";    // Print value of nCr and Print space after each number                 
        }
        cout << endl;                    // Move to next line after each row
    }
}