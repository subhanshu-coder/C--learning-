#include <iostream>
using namespace std;

void printNumbers(int n) { 
    // Base case
    if (n == 0) 
        return;

           // Recursive call
    printNumbers(n - 1);

    cout << n << " "; 
}

int main() {  // Main function

    printNumbers(5); // Call the function to print numbers from 1 to 5

    return 0;
}