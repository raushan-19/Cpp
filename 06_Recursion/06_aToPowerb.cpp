// Make a function which calculates 'a' raised to the power 'b' using recursion.

#include <iostream>
using namespace std;

int power(int a, int b)           // Function to calculate a raised to power b
{
    if (b == 0)                  // Base case: any number raised to power 0 is 1
        return 1;
    return a * power(a, b - 1);  // Recursive call: a^b = a * a^(b-1)
}

int main()
{
    int a, b;                    
    cout << "Enter base : ";        
    cin >> a;                    
    cout << "Enter power : ";        
    cin >> b;                    
    cout << power(a, b);         // Call power function and print result
}