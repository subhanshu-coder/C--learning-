#include<set> 
using namespace std;

set<int> s; 

s.insert(30);
s.insert(10);
s.insert(20);
s.insert(10);

for(int x : s)  
    cout << x << " ";