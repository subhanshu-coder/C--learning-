#include <algorithm> // include the algorithm library for sorting algorithms
#include <vector>

vector<int> arr = {5, 2, 8, 1, 3}; // Create a vector of integers

sort(arr.begin(), arr.end());  // Sort the vector in ascending order using the sort function from the algorithm library

for(int x : arr) // Iterate through the sorted vector and print the elements
    cout << x << " "; // Output: 1 2 3 5 8 (the elements are printed in ascending order)