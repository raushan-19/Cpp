// Print the given pattern :- A A A A
//                            B B B B
//                            C C C C
//                            D D D D

#include <iostream>
using namespace std;

int main()
{
    int rows, columns;                    // Declare two integer variables: rows and columns

    cout << "Enter Rows : ";              // Ask user to enter number of rows
    cin >> rows;                          // Store the value in rows

    cout << "Enter Columns : ";           // Ask user to enter number of columns
    cin >> columns;                       // Store the value in columns

    for (int i = 1; i <= rows; i++)       // Outer loop: controls number of rows
    {
        int ascii = 65 + (i - 1);         // Set ascii value: Row 1 -> A, Row 2 -> B, Row 3 -> C...

        for (int j = 1; j <= columns; j++)   // Inner loop: controls number of columns
        {
            cout << (char)ascii << " ";   // Convert ascii number to character and print
        }

        cout << endl;                     // Move to next line after each row
    }
}
