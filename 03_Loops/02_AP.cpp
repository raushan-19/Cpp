// Display this AP - 4, 7, 10, 11, 13.... upto 'n' terms.

#include <iostream>
using namespace std;
int main()
{
    int n, lt; //  'n' last is position & lt is last term
    cout << "Enter last position : ";
    cin >> n;
    lt = 4 + (n - 1) * 3; // formula :- nth term = a+(n-1)*d  {here a = 4 & d = 3}
    cout << "The required AP is : ";
    for (int i = 4; i <= lt; i = i + 3)
    {
        cout << i << " ";
    }
}