#include <iostream>
using namespace std;

class Student
{                // Declares a class named Student (blueprint for student objects)
public:          // Public access specifier (members are accessible outside the class)
    string name; // Data member to store student's name (string type)
    int rollno;  // Data member to store student's roll number (integer type)
    float cgpa;  // Data member to store student's CGPA (floating-point type)
}; // Ends the class definition

int main() // Main function — program execution starts from here
{
    Student s1;          // Creates an object s1 of Student class (represents one student)
    s1.name = "Raushan"; // Assigns the name "Raushan" to s1's name variable
    s1.rollno = 135;     // Assigns roll number 135 to s1's rollno variable
    s1.cgpa = 7.19;      // Assigns CGPA 7.19 to s1's cgpa variable

    Student s2;         // Creates another object s2 of Student class (represents another student)
    s2.name = "Lallan"; // Assigns the name "Lallan" to s2's name variable
    s2.rollno = 179;    // Assigns roll number 179 to s2's rollno variable
    s2.cgpa = 4.79;     // Assigns CGPA 4.79 to s2's cgpa variable

    cout << s1.name << " "   // Prints s1's name
         << s1.rollno << " " // Prints s1's roll number
         << s1.cgpa << endl; // Prints s1's CGPA and moves to next line

    cout << s2.name << " "   // Prints s2's name
         << s2.rollno << " " // Prints s2's roll number
         << s2.cgpa << endl; // Prints s2's CGPA and moves to next line
}
