#include <iostream>
using namespace std;

class Cricketer
{                  // Defines a class named Cricketer
public:            // Makes the data members and functions accessible outside the class
    string name;   // Variable to store the cricketer's name
    int runs;      // Variable to store total runs scored by the cricketer
    float average; // Variable to store batting average

    // Parameterized constructor to initialize data members
    Cricketer(string name, int runs, float average)
    {
        this->name = name;       // Assigns the parameter 'name' to the class variable 'name'
        this->runs = runs;       // Assigns the parameter 'runs' to the class variable 'runs'
        this->average = average; // Assigns the parameter 'average' to the class variable 'average'
        // 'this->' refers to the current object's data members
    }
};

void change(Cricketer* c){
    (*c).average = 77.9;
}

int main()
{

    // Creates object c1 and initializes it using constructor
    Cricketer c1("Virat Kohli", 24000, 55.3);
    cout<<c1.average<<endl;

    change(&c1);
    cout<<c1.average<<endl;

    // Creates object c2 and initializes it using constructor
    // Cricketer c2("Rohit Sharma", 15000, 89.6);

    // Cricketer* p1 = &c1;
    // cout<<(*p1).runs<<endl;

    return 0;
}
