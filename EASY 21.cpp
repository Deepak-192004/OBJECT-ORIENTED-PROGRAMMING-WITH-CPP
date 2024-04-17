#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    cout << "Displaying address using arrays:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    cout << "\nDisplaying address using pointers:" << endl;
    int* ptr = arr; // Pointer to the first element of the array
    for (int i = 0; i < size; i++) {
        cout << "ptr + " << i << " = " << (ptr + i) << endl;
    }

    return 0;
}

