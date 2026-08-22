#include <iostream>
using namespace std;

int main() {
     
    int age = 22; 
    bool isStudent = true; 
    float height = 5.9; 
    char grade = 'A';
    double weight = 70.5; 
    string name = "John"; 
    cout << "my age is: " << age <<endl;
    cout << "size of int: " << sizeof(age) << " bytes" << endl; 
    cout << "size of bool: " << sizeof(isStudent) << " bytes" << endl; 
    cout << "size of float: " << sizeof(height) << " bytes" << endl;
    cout << "size of char: " << sizeof(grade) << " bytes" << endl;
    cout << "size of double: " << sizeof(weight) << " bytes" << endl;
    cout << "size of string: " << sizeof(name) << " bytes" << endl;
    return 0;  
    
    
}


// char data type: char takes 1 byte
// float data type: float takes 4 byte


 
#include <iostream>
using namespace std;

int main() {
   int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum = " << a + b;
  return 0;
}