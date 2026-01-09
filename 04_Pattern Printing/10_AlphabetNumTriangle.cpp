// Print the given pattern :- 
// 1 
// A B 
// 1 2 3 
// A B C D
// 1 2 3 4 5 

#include <iostream>          
using namespace std;         

int main()                   
{
    int r;                   

    cout << "Enter rows : "; 
    cin >> r;                

    for (int i = 1; i <= r; i++)   // Outer loop → controls number of rows
    {
        char ch = 'A';             // Start alphabet from 'A' for each row

        for (int j = 1; j <= i; j++)   // Inner loop → prints values in each row
        {
            if (i % 2 != 0)            // If row number is ODD
            {
                cout << j << " ";     // Print numbers (1, 2, 3, ...)
            }
            else if (i % 2 == 0)      // If row number is EVEN
            {
                cout << ch << " ";   // Print alphabets (A, B, C, ...)
                ch++;                // Move to next alphabet
            }
        }

        cout << endl;                 // After one row, move to next line
    }
}
