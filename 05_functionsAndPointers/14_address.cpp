#include <iostream>
using namespace std;
int main()
{
    int x = 3;              // Declare an integer variable named 'x' and initialize it with the value 3

cout << &x << endl;     // Print the memory address of variable 'x' using the address-of operator (&),
                        // 'cout' sends the output to the screen and 'endl' moves the cursor to a new line

// 0x61ff0c              // This is an example of the memory address where 'x' is stored in RAM,
                        // the actual address can be different every time the program runs
 
}