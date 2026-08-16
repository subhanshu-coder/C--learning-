#include <iostream> // include the iostream library for input/output operations
using namespace std;
class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }
};

int main() {
    Student s("Rahul");

    cout << s.name;
}