#include <iostream>
using namespace std;

// This function named 'usa' does not return any value
void usa() {
    cout << "You are in USA."<<endl;   // Prints message when usa() function is called
    return;                      // Ends the usa() function and returns control to the caller
}

// This function named 'india' also does not return any value
void india() {
    cout << "You are in India."<<endl; // Prints message when india() function is called
    usa();                       // Calls the usa() function from inside india()
}

// Program execution starts from the main() function
int main()
{
    cout << "You are in main."<<endl;  // Prints message when program starts execution
    india();                     // Calls the india() function
    return 0;                    // Ends the program successfully
}
