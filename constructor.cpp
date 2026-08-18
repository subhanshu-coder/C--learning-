#include <iostream> // include the iostream library for input/output operations
using namespace std;
class Student { // define a class named Student
public:
    string name; // declare a public member variable 'name' of type string

    Student(string n) { // constructor that takes a string parameter 'n'
        name = n; 
    }
};

int main() { // define the main function
    Student s("Rahul");  

    cout << s.name;  
}