// Print the given pattern :-            *
//                                     * *
//                                   * * *
//                                 * * * *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter rows : ";
    cin >> n;
    // Outer loop controls number of rows
    for (int i = 1; i <= n; i++)
    {
        // This loop prints spaces before stars
        // n - i + 1 spaces are printed to shift stars to the right
        for (int j = 1; j <= n - i ; j++)
        {
            cout << "  "; // Print two spaces for alignment
        }

        // This loop prints stars in each row
        for (int j = 1; j <= i; j++)
        {
            cout << "* "; // Print star followed by space
        }

        cout << endl; // Move to next line after each row
    }
}