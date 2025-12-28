// Display this GP - 1, 2, 4, 8, 16, 32.... upto 'n' terms.

#include <iostream>
using namespace std;
int main()
{
    int n; //  'n' last is position
    cout << "Enter last position : ";
    cin >> n;
    int a = 1;      // took a variable 'a' with value 1.
    for(int i =1;i<=n;i++){         // loop will run till the nth term
        cout<<a<<" ";       // it prints the value of 'a' after every iteration
        a = a * 2;   //it doubles the value of 'a' after every iteration
    }
}