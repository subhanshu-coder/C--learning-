// #include <iostream>
// using namespace std;

// int arr[] = {10, 20, 30, 40, 50};
// int target = 30;

// for(int i = 0; i < 5; i++) {
//     if(arr[i] == target) {
//         cout << "Element found at index: " << i << endl;
//         break;
//     }

// binary search implementation
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {  // binary search function int arr[], int size, int target
    int left = 0;  // Initialize the left pointer
    int right = size - 1; // Initialize the left and right pointers

    
    while (left <= right) {  // Continue searching while the left pointer is less than or equal to the right pointer
        int mid = left + (right - left) / 2; // Calculate the middle index

        if (arr[mid] == target)
            return mid; // Element found
        else if (arr[mid] < target) 
            left = mid + 1; 
        else
            right = mid - 1; 
    }

    return -1; // Element not found
}

