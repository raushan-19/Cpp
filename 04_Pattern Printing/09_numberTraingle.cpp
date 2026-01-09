// Print the given pattern :- 1
//                            2 2
//                            3 3 3
//                            4 4 4 4

#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter rows : ";
    cin >> r;
    for (int i = 1; i <= r; i++) // Outer loop: controls number of rows
    {
        for (int j = 1; j <= i; j++) // Inner loop: prints numbers in each row
        {
            cout << i << " "; // Print value of 'i' with a space
        }

        cout << endl; // Move to the next line after each row
    }
}