#include <iostream> 
using namespace std; 

int add(int a, int b) { 
    return a + b; 
}

int main() {
    cout << add(10, 20);
    return 0;
}

int main1(){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age >=18){
        cout << "You are eligible to vote.";
    } else {
        cout << "You are not eligible to vote.";
    }
    return 0;
}