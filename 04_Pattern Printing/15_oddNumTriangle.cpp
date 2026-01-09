// Print the given pattern :- 1
//                            1 3
//                            1 3 5
//                            1 3 5 7

#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter Rows : ";
    cin >> r;
    for (int i = 1; i <= r; i++) // Outer loop: controls number of rows
    {
        int num = 1; // Start odd number from 1 for each row

        for (int j = 1; j <= i; j++) // Inner loop: controls numbers printed in each row
        {
            cout << num << " "; // Print the current odd number
            num = num + 2;      // Increase number by 2 to get next odd number
        }

        cout << endl; // Move to next line after each row
    }
}