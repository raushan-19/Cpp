#include<iostream>
using namespace std;

class Cricketer {             // Defines a class named Cricketer
public:                       // Makes the data members accessible outside the class

    string name;              // Variable to store the cricketer's name
    int runs;                 // Variable to store total runs scored
    float average;

    Cricketer(string name, int runs, float average) {   // Parameterized constructor
        this->name = name;    // Assigns the constructor's name to the class variable name
        this->runs = runs;    // Assigns the constructor's runs to the class variable runs
        this->average = average;
        //  this-> = Refers to current object’s data members
    }

    void print(){
    cout << name << " " << runs<<" " << average<< endl;  
    }

};

int main() {                  

    Cricketer c1("Virat Kohli", 24000, 55.3);   // Creates object c1 and initializes data using constructor
    Cricketer c2("Rohit Sharma", 15000, 89.6);  // Creates object c2 and initializes data using constructor

    c1.print();
    c2.print();
}