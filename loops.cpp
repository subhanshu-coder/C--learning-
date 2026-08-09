#include <iostream> // include the iostream library for input/output operations
using namespace std;  // use the standard namespace to avoid prefixing standard library names with "

for(int i = 1; i <= 10; i++) {
    cout << i << " ";

    return 0;  // return 0 to indicate that the program executed successfully
}


// solving while loop
#include <iostream> // include the iostream library for input/output operations
using namespace std;  // use the standard namespace to avoid prefixing standard library names with "

int main() {
    int i = 1; // initialize the loop counter variable 'i' to 1

    while(i <= 10) { // while loop that continues as long as 'i' is less than or equal to 10
        cout << i << " "; // print the current value of 'i' followed by a space
        i++; // increment the value of 'i' by 1
    }

    return 0; // return 0 to indicate that the program executed successfully
}

// do- while loop solving 
#include <iostream>
using namespace std;  // use the standard namespace to avoid prefixing standard library names with "

int main() {
    int i = 1; // initialize the loop counter variable 'i' to 1

    do { // do-while loop that executes the block of code at least once
        cout << i << " "; // print the current value of 'i' followed by a space
        i++; // increment the value of 'i' by 1
    } while(i <= 10); // continue the loop as long as 'i' is less than or equal to 10

    return 0; // return 0 to indicate that the program executed successfully
}