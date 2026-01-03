// Print the given pattern :- A B C D
//                            A B C D
//                            A B C D
//                            A B C D

#include <iostream>
using namespace std;

int main()
{
    int rows, columns;

    cout << "Enter Rows : ";
    cin >> rows;

    cout << "Enter Columns : ";
    cin >> columns;

    for (int i = 1; i <= rows; i++) // Outer loop for rows
    {
        int ascii = 65; // 65 means 'A'

        for (int j = 1; j <= columns; j++) // Inner loop for columns
        {
            cout << (char)ascii << " "; // Convert number → character and print
            ascii++;                    // Go to next ASCII value (65→66→67…)
        }

        cout << endl; // New line after each row
    }
}
