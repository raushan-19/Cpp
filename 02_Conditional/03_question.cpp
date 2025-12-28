// If cost and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred.

#include <iostream>
using namespace std;
int main()
{
    int cp, sp, pf, ls;
    cout << "Enter Cost Price : ";
    cin >> cp;
    cout << "Enter Selling Price : ";
    cin >> sp;
    if (sp > cp)
    {
        pf = sp - cp;
        cout << "Seller has made profit by " << pf;
    }
    else if (sp < cp)
    {
        ls = cp - sp;
        cout << "Seller has made loss by " << ls;
    }
    else if (sp == cp){
        cout << "Seller has neither got profit nor loss";
        }
}