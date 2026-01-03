// Print the given pattern :- 1 2 3 4
//                            1 2 3 4
//                            1 2 3 4
//                            1 2 3 4

#include <iostream>
using namespace std;
int main()
{
    int rows, columns; // Declare two integer variables: rows and columns

    cout << "Enter Rows : "; // Ask the user to enter number of rows
    cin >> rows;             // Take input from user and store it in 'rows'

    cout << "Enter Columns : "; // Ask the user to enter number of columns
    cin >> columns;             // Take input from user and store it in 'columns'

    for (int i = 1; i <= rows; i++) // Outer loop: runs from 1 to total number of rows
    {
        for (int j = 1; j <= columns; j++) // Inner loop: runs from 1 to total number of columns
        {
            cout << j << " "; // Print a star followed by a space (on the same line)
        }

        cout << endl; // Move to next line after finishing one full row
    }
}