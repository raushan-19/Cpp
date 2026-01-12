#include <iostream>
using namespace std;
int main()                          
{
    int a = 5, b = 8;               // Declare two integer variables a and b and initialize them with values 5 and 8
    cout << "a = " << a << " b = " << b << endl;  // Print the initial values of a and b on the screen
    int temp = a;                   // Declare a temporary variable temp and store the value of a in it
    a = b;                          // Assign the value of b to a (now a becomes 8)
    b = temp;                       // Assign the value stored in temp to b (now b becomes 5)
    cout << "a = " << a << " b = " << b << endl;          // Print the updated value of a and b after swapping
}
