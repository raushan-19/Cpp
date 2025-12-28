// Display this AP - 1, 3, 5, 7, 9.... upto 'n' terms.

#include<iostream>
using namespace std;
int main (){
    int n, lt;  //  'n' last is position & lt is last term
    cout<<"Enter last position : ";
    cin>>n;
    lt = 1+(n-1)*2;     // formula :- nth term = a+(n-1)*d  {here a = 1 & d = 2}
    cout<<"The required AP is : "; 
    for(int i=1; i<=lt; i=i+2){
        cout<<i<<" ";
    }
}