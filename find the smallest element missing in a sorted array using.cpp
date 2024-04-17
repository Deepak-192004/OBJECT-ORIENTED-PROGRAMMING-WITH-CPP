#include <iostream>
using namespace std;
int findMissing(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        // If the current element is not at its correct position
        if (arr[mid] != mid + 1) {
            // If the element just before mid is at its correct position,
            // then the missing element must be arr[mid]-1.
            if (mid == 0 || arr[mid - 1] == mid)
                return mid + 1;
            // Otherwise, continue searching in the left half
            high = mid - 1;
        } else {
            // If the current element is at its correct position,
            // continue searching in the right half
            low = mid + 1;
        }
    }
    // If no element is missing
    return -1;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 8}; // Example sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing = findMissing(arr, n);
    if (missing != -1) {
        cout << "The smallest missing element is: " << missing << endl;
    } else {
        cout << "No element is missing." << endl;
    }
    return 0;
}
