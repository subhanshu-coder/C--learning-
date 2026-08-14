#include <iostream>
using namespace std;

void printNumbers(int n) { // Function to print numbers from 1 to n using recursion
    // Base case
    if (n == 0)
        return;

           // Recursive call
    printNumbers(n - 1);

    cout << n << " ";
}

int main() {

    printNumbers(5);

    return 0;
}