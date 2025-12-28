// Given the length and breadth of a rectangle, write a program to find whether the area of a rectangle is greater than its perimeter.

#include <iostream>
using namespace std;
int main()
{
    int ln, br, ar, pr;
    cout<<"enter length : ";
    cin>>ln;
    cout<<"enter breadth : ";
    cin>>br;
    ar = ln*br;
    pr = 2*(ln+br);
    if(ar>pr){
        cout<<"Area of rectangle ("<<ar<<") is greater than its perimeter ("<<pr<<")";
    }
    else{
        cout<<"Area of rectangle ("<<ar<<") is smaller than its perimeter ("<<pr<<")";
    }
}