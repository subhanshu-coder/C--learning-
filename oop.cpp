#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << name << " " << age;
    }
};
return 0;
}
int main() {
    Student student1;
    student1.name = "John";
    student1.age = 20;

    student1.display();

    return 0;
}
