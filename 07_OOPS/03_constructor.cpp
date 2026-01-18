#include <iostream>
using namespace std;

class Student // Defines a class named Student
{
public:          // Makes data members accessible from outside the class
    string name; // Variable to store student's name
    int rollno;  // Variable to store student's roll number
    float cgpa;  // Variable to store student's CGPA

    Student() // Default constructor (no parameters) (non-parameterized constructor)
    {
        // This constructor runs when an object is created without arguments
        // No initialization is done here
    }

    Student(string s, int r) // Parameterized constructor with 2 parameters
    {
        name = s;   // Assigns value of s to name
        rollno = r; // Assigns value of r to roll number
        // cgpa is not initialized here
    }

    Student(string s, int r, float c) // Parameterized constructor with 3 parameters
    {
        name = s;   // Stores student name
        rollno = r; // Stores roll number
        cgpa = c;   // Stores CGPA
    }
};

int main() 
{
    Student s1("Raushan Kr. Tiwari", 56);   // Creates object s1 using 2-parameter constructor
    s1.cgpa = 9.1;  // Assigns CGPA separately because constructor didn’t set it
    

    Student s2;         // Creates object s2 using default constructor
    s2.name = "Lallan"; // Assigns name to s2
    s2.rollno = 179;    // Assigns roll number to s2
    s2.cgpa = 4.79;     // Assigns CGPA to s2

    Student s3("Pranav Prakash", 33, 3.5);
    // Creates object s3 using parameterized constructor

    cout << s1.name << " " << s1.rollno << " " << s1.cgpa << endl;
    // Prints details of student s1

    cout << s2.name << " " << s2.rollno << " " << s2.cgpa << endl;
    // Prints details of student s2

    cout << s3.name << " " << s3.rollno << " " << s3.cgpa << endl;
    // Prints details of student s3

    return 0;
}