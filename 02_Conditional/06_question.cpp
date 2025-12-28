// take a postive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter your number : ";
    cin >> n;
    if ((n % 5 == 0 || n % 3 == 0) && n % 15 != 0)
    {
        cout << n <<" is divisible by 5 or 3 but not divisible by 15";
    }
    else
        cout << "This is not the required number";
}