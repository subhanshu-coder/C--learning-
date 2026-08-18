#include <iostream> 
using namespace std;
class Student {
public:
    string name; 

    Student(string n) { 
        name = n; 
    }
};

int main() { // define the main function
    Student s("Rahul");  

    cout << s.name;  
}