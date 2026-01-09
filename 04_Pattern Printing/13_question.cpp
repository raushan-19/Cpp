// Print the given pattern :- 4
//                            4 3
//                            4 3 2
//                            4 3 2 1

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++) // Outer loop: controls number of rows (runs from 1 to 4)
    {
        int a = 4; // Initialize variable 'a' with value 4 (this resets in every row)

        for (int j = 1; j <= i; j++) // Inner loop: controls how many values are printed in each row
        {
            cout << a << " "; // Print current value of 'a'
            a--;              // Decrease 'a' by 1 after printing
        }

        cout << endl; // Move to next line after each row
    }
}