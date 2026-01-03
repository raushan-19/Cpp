// Print the given pattern :- A B C D
//                            A B C D
//                            A B C D
//                            A B C D

#include <iostream>
using namespace std;
int main()
{
    int rows, columns; // Declare two integer variables: rows and columns
    char ch;

    cout << "Enter Rows : "; // Ask the user to enter number of rows
    cin >> rows;             // Take input from user and store it in 'rows'

    cout << "Enter Columns : "; // Ask the user to enter number of columns
    cin >> columns;             // Take input from user and store it in 'columns'

    for (int i = 1; i <= rows; i++) // Outer loop: controls number of rows
    {
        ch = 'A'; // Start character as 'A' for each row

        for (int j = 1; j <= columns; j++) // Inner loop: controls number of columns
        {
            cout << ch << " "; // Print current character
            ch++;              // Move to next character (A → B → C → D …)
        }

        cout << endl; // Go to next line after each row
    }
}