#include <iostream>
using namespace std;

class Student {  // Class definition for Student
public: // Public access specifier to allow access to the member variable and constructor from outside the class
    string name; 

    Student(string n) { 
        name = n;  
    }
};