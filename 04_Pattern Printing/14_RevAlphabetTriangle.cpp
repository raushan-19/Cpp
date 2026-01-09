// Print the given pattern :- A B C D
//                            A B C
//                            A B
//                            A

#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter Rows : ";
    cin >> r;
    for (int i = r; i >= 1; i--) // Loop starts from r and goes down to 1 (decreasing i each time)
    {
        char ch = 'A'; // Initialize character variable ch with 'A' for every row

        for (int j = 1; j <= i; j++) // Inner loop runs from 1 to i (number of characters to print)
        {
            cout << ch << " "; // Print the current character
            ch++;              // Move to the next character (A -> B -> C -> ...)
        }

        cout << endl; // After finishing one row, move to the next line
    }
}