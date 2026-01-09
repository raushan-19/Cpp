// Print the given pattern :- 1
//                            0 1
//                            1 0 1
//                            0 1 0 1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Rows : ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) // Outer loop: controls number of rows
    {
        for (int j = 1; j <= i; j++) // Inner loop: controls number of columns in each row
        {
            if ((i + j) % 2 == 0)    // Check if sum of row and column index is even
            {
                cout << "1" << " "; // Print 1 when (i + j) is even
            }
            else
            {
                cout << "0" << " "; // Print 0 when (i + j) is odd
            }
        }
        cout << endl;                // Move to the next line after each row
    }
}