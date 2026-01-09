// Print the given pattern :- * * * *
//                            * * *
//                            * *
//                            *

#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter rows : ";
    cin >> r;
    // Outer loop controls the number of rows
    for (int i = r; i >= 1; i--) // Start from r and go down to 1 (decreasing pattern)
    {
        // Inner loop prints stars in each row
        for (int j = 1; j <= i; j++) // Print stars equal to the current value of i
        {
            cout << "* "; // Print one star with space
        }

        cout << endl; // Move to the next line after each row
    }
}