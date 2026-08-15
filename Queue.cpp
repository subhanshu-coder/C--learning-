#include <queue>  // queue is a container adapter that gives the functionality of a queue data structure;
using namespace std;  // The queue follows the FIFO (First In First Out) principle, where elements are added to the back and removed from the front.


queue<int> q;

q.push(10);
q.push(20);
q.push(30);

cout << q.front(); // 10

q.pop();