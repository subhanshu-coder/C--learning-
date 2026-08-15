#include <algorithm> // include the algorithm library for sorting algorithms
#include <vector>

vector<int> arr = {5, 2, 8, 1, 3}; // Create a vector of integers

sort(arr.begin(), arr.end());

for(int x : arr)
    cout << x << " ";