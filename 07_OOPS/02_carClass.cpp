#include <iostream>
using namespace std;

class Car // Defines a class named Car
{
public:
    string name; // Stores the name of the car
    int price;   // Stores the price of the car
    string type; // Stores the type of the car (SUV, Sedan, etc.)
    int seats;   // Stores number of seats in the car
};

void print(Car c) // Function that receives a Car object (by value)
{
    // Prints all data members of the Car object
    cout << c.name << " "   // Prints car name
         << c.price << " "  // Prints car price
         << c.seats << " "  // Prints number of seats
         << c.type << endl; // Prints car type and moves to new line
}

void change(Car &c) // Function that receives Car object by reference
{
    c.name = "Audi"; // Changes the name of the original Car object
}

int main() // Main function where program execution starts
{
    Car c1; // Creates an object c1 of class Car

    c1.name = "Honda City"; // Assigns name to c1
    c1.price = 9800000;     // Assigns price to c1
    c1.type = "Sedan";      // Assigns type to c1
    c1.seats = 9;           // Assigns number of seats to c1

    print(c1); // Calls print function to display c1 details

    change(c1); // Calls change function (modifies c1.name)

    print(c1); // Prints updated c1 details (name becomes Audi)

    Car c2;                // Creates another object c2 of class Car
    c2.name = "Supra";     // Assigns name to c2
    c2.price = 38000000;   // Assigns price to c2
    c2.type = "Super car"; // Assigns type to c2
    c2.seats = 2;          // Assigns number of seats to c2

    Car c3;               // Creates another object c3 of class Car
    c3.name = "Fortuner"; // Assigns name to c3
    c3.price = 5000000;   // Assigns price to c3
    c3.type = "SUV";      // Assigns type to c3
    c3.seats = 6;         // Assigns number of seats to c3

    print(c2); // Prints details of c2
    print(c3); // Prints details of c3
}