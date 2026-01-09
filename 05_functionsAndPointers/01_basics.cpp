#include <iostream>              // Header file for input-output operations like cout
using namespace std;             // Allows us to use cout without writing std::cout

void greet()                     // Function definition named 'greet' with no return type
{
    cout << "Hello dosto!" << "\n";   // Prints "Hello dosto!" and moves cursor to new line
    cout << "Save water drink beer";  // Prints the message on the screen
}

int main()                       // Main function: program execution starts from here
{
    greet();                     // Function call: calls greet() to execute its code
}
