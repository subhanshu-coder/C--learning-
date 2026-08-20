#include <queue>  // queue is a container adapter that gives the functionality of a queue data structure;
using namespace std;  


queue<int> q; 

q.push(10); 
q.push(20);
q.push(30);

cout << q.front();

q.pop(); 