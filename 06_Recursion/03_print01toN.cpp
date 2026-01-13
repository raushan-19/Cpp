// Print 1 to N using recursion.

#include<iostream>
using namespace std;

int print(int x, int n) {          
    // Function definition named 'print'
    // It takes two integer parameters:
    // x -> current number to be printed
    // n -> last number till which printing is required

    if (x > n)                     
        // Base condition:
        // If current number x becomes greater than n,
        // stop the recursion

        return 0;                 
        // Return 0 to end the function execution

    cout << x << endl;            
    // Print the current value of x on a new line

    print(x + 1, n);              
    // Recursive call:
    // Calls the same function again with x increased by 1
    // This will keep printing numbers until x > n
}

int main() {                      
    int n;                        
    cout << "Enter n : ";         
    cin >> n;                     
    print(1, n);                  
}


// ----- ANOTHER METHOD -------

// void print(int x)
// {
//     if(x == 0)          // base condition first
//         return;

//     print(x - 1);       // recursive call
//     cout << x << endl;  // print after recursion
// }

// int main()
// {
//     int a = 7;
//     print(a);
// }