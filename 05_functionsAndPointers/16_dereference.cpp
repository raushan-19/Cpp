#include <iostream>
using namespace std;
int main()
{
    int x = 9;
    int* p = &x;
    cout<<x<<endl;
    cout<<*p<<endl;
    *p = 76;        // x became 76
    cout<<x<<endl;
}