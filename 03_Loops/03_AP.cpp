// Display this AP - 4, 7, 10, 11, 13.... upto 'n' terms.

// This is another way of way doing the same question.

#include <iostream>
using namespace std;
int main()
{
    int n; //  'n' last is position
    cout << "Enter last position : ";
    cin >> n;
    int a = 4;      // took a new variable 'a' vith value '4'
    for (int i = 1; i <= n; i++)  // loop will run till the nth term
    {
        cout << a << " ";   // it prints the value of 'a' after every iteration
        a = a + 3;      // it increases the value of 'a' by 3 after every iteration
    }
}