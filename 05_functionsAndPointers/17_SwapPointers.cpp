#include <iostream>
using namespace std;

void swap(int* x, int* y){        // Function that takes two integer POINTERS (addresses of variables)
    
    int temp = *x;               // Store the VALUE present at address x into temp
    
    *x = *y;                     // Copy the VALUE at address y into the memory location pointed by x
    
    *y = temp;                   // Store the value of temp into the memory location pointed by y
}

int main()                       // Main function: program execution starts here
{
    int a = 4, b = 5;            // Declare two integer variables a and b and initialize them
    
    cout << "a = " << a << " b = " << b << endl;  // Print the values of a and b before swapping
    
    swap(&a, &b);                // Call swap function and pass ADDRESSES of a and b
    
    cout << "a = " << a << " b = " << b << endl;  // Print the values of a and b after swapping
}
