#include <iostream>
using namespace std;
int main()
{
    int x = 9; // Declare an integer variable 'x' and store value 9 in it

    int *p; // Declare a pointer 'p' that can store the address of an integer variable

    p = &x; // Store the address of variable 'x' into pointer 'p'

    cout << &x << endl; // Print the memory address of variable 'x'

    cout << p << endl; // Print the value stored in pointer 'p'
                       // (which is also the address of 'x', so both outputs will be the same)
                       
    cout<<*p<<endl; //Print the value of variable whose address is stored in p
}