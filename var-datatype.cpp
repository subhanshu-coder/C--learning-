#include <iostream>
using namespace std;

int main() {

    int age = 22; // declare an integer variable 'age' and initialize it with the value 22
    bool isStudent = true; // declare a boolean variable 'isStudent' and initialize it with the value true
    float height = 5.9; // declare a float variable 'height' and initialize it with the value 5.9
    cout << "my age is: " << age <<endl;
    cout << "size of int: " << sizeof(age) << " bytes" << endl; // print the size of the integer variable 'age'
    cout << "size of bool: " << sizeof(isStudent) << " bytes" << endl; // print the size of the boolean variable 'isStudent'
    cout << "size of float: " << sizeof(height) << " bytes" << endl; // print the size of the float variable 'height'
    return 0;
}

// data type: int takes 4 byte
// char data type: char takes 1 byte
// float data type: float takes 4 byte
// bool data type: bool takes 1 byte
// double data type: double takes 8 byte