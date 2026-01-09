// Print the given pattern :- *       ( n should be odd )
//                            *
//                        * * * * *
//                            *
//                            *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    int mid = (n / 2) + 1;       // Calculate the middle position of the matrix (for both row and column)
    for (int i = 1; i <= n; i++) // Outer loop controls the rows from 1 to n
    {
        for (int j = 1; j <= n; j++) // Inner loop controls the columns from 1 to n
        {
            if (i == mid || j == mid) // Check if current position is in the middle row or middle column
            {
                cout << "* "; // Print star when the condition is true (forms a plus + shape)
            }
            else
            {
                cout << "  "; // Print two spaces for empty positions to keep alignment
            }
        }
        cout << endl; // Move to the next line after completing one row
    }
}