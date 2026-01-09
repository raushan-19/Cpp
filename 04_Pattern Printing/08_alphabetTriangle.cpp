// Print the given pattern :- A
//                            A B
//                            A B C
//                            A B C D

#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter rows : ";
    cin >> r;
    // Outer loop → controls number of rows
    for (int i = 1; i <= r; i++)
    {
        char ch = 'A'; // Initialize character ch with 'A' at the start of every row

        // Inner loop → prints characters in each row
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " "; // Print current character followed by a space
            ch++;              // Move to the next character (A → B → C → ...)
        }

        cout << endl; // Move to the next line after completing one row
    }
}