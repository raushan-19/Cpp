// Print the given pattern :- *       *            ( n should be odd)
//                              *   *
//                                *
//                              *   *
//                            *       *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    
    // Outer loop controls rows
    for (int i = 1; i <= n; i++)
    {
        // Inner loop controls columns
        for (int j = 1; j <= n; j++)
        {
            // Condition for printing stars
            // i == j  -> left diagonal
            // i + j == n + 1 -> right diagonal
            if (i == j || i + j == n + 1)
            {
                cout << "*"; // Print star on diagonal positions
            }
            else
            {
                cout << " "; // Print space at other positions
            }
        }
        cout << endl; // Move to next line after each row
    }
}