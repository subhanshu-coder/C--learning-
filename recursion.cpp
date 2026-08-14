#include <iostream>
using namespace std;

void printNumbers(int n) { // Function to print numbers from 1 to n using recursion
    // Base case
    if (n == 0)
        return;

           // Recursive call
    printNumbers(n - 1);

    cout << n << " "; // Print the current number after the recursive call to ensure numbers are printed in ascending order
}

int main() {  // Main function

    printNumbers(5); // Call the function to print numbers from 1 to 5

    return 0;
}