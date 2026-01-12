// Swap two two numbers without using extra variable

#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 9;                 // Declare two integer variables x and y and initialize them with values 5 and 9
    cout << x << " " << y << endl;    // Print the initial values of x and y on the screen
    x = x + y;                        // Store the sum of x and y in x (x becomes 14)
    y = x - y;                        // Subtract old value of y from new x to get original value of x (y becomes 5)
    x = x - y;                        // Subtract new value of y from x to get original value of y (x becomes 9)
    cout << x << " " << y << endl;    // Print the swapped values of x and y
}
