// Find biggest in two numbers.

#include <iostream>
#include <cmath> // Includes mathematical functions
using namespace std;

// ------- FIRST METHOD USING :- CALL BY VALUE -------

// int findMax(int x , int y){  // Function definition that takes two integer parameters x and y
//     cout<<"Biggest number is :- ";
//     return max(x,y);         // Returns the greater value between x and y using max() function
// }

// int main()                   // Main function: program execution starts from here
// {
//     int a, b;
//     cout<<"Enter a : ";
//     cin>>a;
//     cout<<"Enter b : ";
//     cin>>b;
//     cout << findMax(a,b);    // Calls findMax function with values a and b and prints the result
// }                            // End of main function

// ------ SECOND METHOD USING :- CALL BY REFERENCE USING REFERENCE VARIABLES -------

int findMax(int &x, int &y) // Function definition using call by reference
{
    cout << "Biggest number is :- "; // Prints a message before showing result
    return max(x, y);                // Returns the larger value between x and y
}

int main() // Program execution starts from main()
{
    int a, b; // Declares two integer variables a and b

    cout << "Enter a : "; // Asks the user to enter value for a
    cin >> a;             // Stores user input into variable a

    cout << "Enter b : "; // Asks the user to enter value for b
    cin >> b;             // Stores user input into variable b

    cout << findMax(a, b); // Calls findMax() and prints the returned value
}

// ------ THIRD METHOD :- CALL BY REFRENCE USING POINTERS --------

// // Function definition that takes two integer pointers as parameters
// int findMax(int *x, int *y)
// {
//     cout << "Biggest number is :- "; // Prints a message before showing the result
//     return max(*x, *y);              // Dereferences pointers to get values and returns the maximum
// }

// int main()
// {
//     int a, b; // Declares two integer variables a and b

//     cout << "Enter a : "; // Asks user to enter value for a
//     cin >> a;             // Takes input from user and stores it in a

//     cout << "Enter b : "; // Asks user to enter value for b
//     cin >> b;             // Takes input from user and stores it in b

//     cout << findMax(&a, &b); // Passes addresses of a and b to function and prints returned value
// }