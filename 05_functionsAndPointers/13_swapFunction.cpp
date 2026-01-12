#include <iostream>              
using namespace std;             

//FIRST METHOD (Call by Reference)

// void swap(int& a, int& b){    // Function declaration (commented): takes a and b by reference
//     int temp = a;             // Stores the value of a in a temporary variable
//     a = b;                    // Assigns value of b to a (original variable changes)
//     b = temp;                 // Assigns old value of a (stored in temp) to b
// }

// int main()                    // Main function (commented) - program execution starts here
// {
//     int a = 4, b = 5;          // Declares and initializes two integer variables
//     cout << "a = " << a << " b = " << b << endl;
//                                // Prints original values of a and b
//     swap(a, b);                // Calls swap function using call by reference
//     cout << "a = " << a << " b = " << b << endl;
//                                // Prints swapped values (original values changed)
// }

//SECOND METHOD (Call by Value)

void swap(int a, int b)          // Function definition: parameters are passed by value (copies)
{
    int temp = a;                // Stores the value of a in a temporary variable
    a = b;                       // Assigns value of b to a (only local copy changes)
    b = temp;                    // Assigns old value of a (stored in temp) to b
    cout << "a = " << a << " b = " << b << endl;    // Prints swapped values inside the function only
}

int main()                       // Main function where program execution starts
{
    int a = 4, b = 5;            // Declares and initializes two integer variables
    cout << "a = " << a << " b = " << b << endl;    // Prints original values before calling swap()
    swap(a, b);                  // Calls swap function using call by value
}
