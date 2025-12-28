#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    if(n>=0)
    cout<<n<<" is already an absolute value";
    if(n<=0)
    cout<<" it's absolute value is "<<-n;
}