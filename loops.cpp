#include <iostream> // include the iostream library for input/output operations
using namespace std;  // use the standard namespace to avoid prefixing standard library names with "

for(int i = 1; i <= 10; i++) {
    cout << i << " ";

    return 0;  // return 0 to indicate that the program executed successfully
}


// solving while loop
#include <iostream> 
using namespace std; 

int main() {
    int i = 1; 

    while(i <= 10) { 
        cout << i << " "; 
        i++; // increment the value of 'i' by 1
    }

    return 0; 
}

// do- while loop solving 
#include <iostream>
using namespace std;  

int main() {
    int i = 1; 

    do { 
        cout << i << " "; 
        i++; 
    } while(i <= 10); 

    return 0; 
}