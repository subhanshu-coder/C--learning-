#include <queue>  // queue is a container adapter that gives the functionality of a queue data structure;
using namespace std;  // The queue follows the FIFO (First In First Out) principle, where elements are added to the back and removed from the front.


queue<int> q;  // Create a queue of integers

q.push(10); // Add elements to the back of the queue
q.push(20);
q.push(30);

cout << q.front(); // Access the front element of the queue (10) and print it to the console

q.pop();