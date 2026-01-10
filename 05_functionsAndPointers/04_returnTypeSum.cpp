#include <iostream>
using namespace std;

int sum(int x, int y)        // Function declaration and definition that takes two integers
{
    return x + y;            // Returns the addition of x and y to the calling function
}

int main()                   // Main function: program execution starts from here
{
   int a = 4, b = 5;                 // Declares two integer variables a and b 
   cout << sum(a, b);        // Calls sum function with initialized values and prints result
   return 0;                 // Ends the program successfully
}