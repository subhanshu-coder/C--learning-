#include <iostream>
using namespace std;

int arr[] = {10, 20, 30, 40, 50};
int target = 30;

for(int i = 0; i < 5; i++) {
    if(arr[i] == target) {
        cout << "Element found at index: " << i << endl;
        break;
    }