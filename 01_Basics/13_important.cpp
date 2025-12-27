#include<iostream>
using namespace std;
int main(){
    float x = 5/2;      // in this case solution starts from RHS ,so computer defaultly understand it (5/2) as a integer value
    cout<<x;        // output :- 2 
    cout<<endl;
    float y = 5.0/2;        // by adding (.0) in 5 computer understand it as a float  
    cout<<y;        // output :- 2.5
}