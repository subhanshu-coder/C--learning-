#include <iostream>
using namespace std;

int main() {
     
    int age = 22; 
    bool isStudent = true; 
    float height = 5.9; 
    char grade = 'A'; // declare a char variable 'grade' and initialize it with the value 'A'
    double weight = 70.5; // declare a double variable 'weight' and initialize it with the value 70.5
    string name = "John"; // declare a string variable 'name' and initialize it with the value "John"
    cout << "my age is: " << age <<endl;
    cout << "size of int: " << sizeof(age) << " bytes" << endl; // print the size of the integer variable 'age'
    cout << "size of bool: " << sizeof(isStudent) << " bytes" << endl; // print the size of the boolean variable 'isStudent'
    cout << "size of float: " << sizeof(height) << " bytes" << endl; // print the size of the float variable 'height'
    cout << "size of char: " << sizeof(grade) << " bytes" << endl; // print the size of the char variable 'grade'
    cout << "size of double: " << sizeof(weight) << " bytes" << endl; // print the size of the double variable 'weight'
    cout << "size of string: " << sizeof(name) << " bytes" << endl; // print the size of the string variable 'name'
    return 0; // return 0 indicates that the program has executed successfully without any errors. It is a convention to return 0 to indicate successful execution.
    // return -1; is used to indicate that the program has ended with an error. It is a convention to return -1 or any non-zero value to indicate an error condition. In this case, returning 0 indicates that the program has executed successfully without any errors.
    // 
}

// data type: int takes 4 byte
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