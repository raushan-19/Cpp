#include<iostream>
using namespace std;
int main (){
    int x;     // it declares a variable "x"
   cout<<"Enter your number : ";    // it print the msg on screen
   cin>>x;     // it takes the input from user
   char ch = (char)x;     //typecasting
   cout<<"Character of integer value "<< x <<" is " << ch ;  // with the help of typecasting we can print the chracter of some integer value (int to char)
}