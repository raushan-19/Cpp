// Print the given pattern :- 1 2 3 4
//                            1 2 3 
//                            1 2 
//                            1 

#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter Rows : ";
    cin >> r;
    for (int i = r; i >= 1; i--) // Start a loop: i begins at r and keeps decreasing until it becomes 1
    {
        for (int j = 1; j <= i; j++) // Inner loop: j starts at 1 and runs up to the current value of i
        {
            cout << j << " "; // Print the value of j followed by a space
        }

        cout << endl; // After finishing one row, move to the next line
    }
}