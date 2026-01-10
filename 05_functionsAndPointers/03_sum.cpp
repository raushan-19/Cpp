#include <iostream>
using namespace std;

void sum(int x, int y)       // Function definition named 'sum' that takes two integer parameters x and y
{
    cout << x + y;           // Prints the sum of x and y on the screen
}

int main()                   // Main function: execution of the program starts from here
{
   int x, y;                 // Declares two integer variables x and y (currently uninitialized)
   sum(x, y);                // Calls the sum function and passes x and y to it
   return 0;                 // Ends the program and returns 0 to the operating system
}