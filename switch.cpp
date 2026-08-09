#include <iostream> // include the iostream library for input/output operations
using namespace std;  // use the standard namespace to avoid prefixing standard library names with "

int day;
cin >> day;

switch(day) {
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    case 3: cout << "Wednesday"; break;
    default: cout << "Invalid day";
}