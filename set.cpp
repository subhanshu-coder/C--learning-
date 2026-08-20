#include<set> // set is a container that stores unique elements in a specific order. It is implemented as a balanced binary search tree, which allows for efficient insertion, deletion, and search operations. The elements in a set are always sorted in ascending order by default.
using namespace std;

set<int> s; // Create a set of integers

s.insert(30); // Add elements to the set
s.insert(10);
s.insert(20);
s.insert(10);

for(int x : s)  
    cout << x << " ";