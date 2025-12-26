// Print character to integer (char to int)

#include<iostream>
using namespace std;
int main (){
   char ch;     // it declares a variable "ch"
   cout<<"Enter your Character : ";    // it print the msg on screen
   cin>>ch;     // it takes the input from user
   int x = (int)ch;     //typecasting
   cout<<"Ascii value of " << ch << " is " << x ;  // with the help of typecasting we can print the ascii vcalue of any character (char to int)
}