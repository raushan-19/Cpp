// Print the given pattern :- * * * * *
//                            *       *
//                            *       *
//                            * * * * *

#include <iostream>
using namespace std;
int main()
{
    int rows, columns;

    cout << "Enter Rows : ";
    cin >> rows;

    cout << "Enter Columns : ";
    cin >> columns;

    // Outer loop controls rows
    for (int i = 1; i <= rows; i++)
    {
        // Inner loop controls columns
        for (int j = 1; j <= columns; j++)
        {
            // Print '*' for:
            // 1) First row
            // 2) Last row
            // 3) First column
            // 4) Last column
            if (i == 1 || i == rows || j == 1 || j == columns)
            {
                cout << "* "; // Print star for border
            }
            else
            {
                cout << "  "; // Print space inside the box
            }
        }
        cout << endl; // Move to next line after each row
    }
}