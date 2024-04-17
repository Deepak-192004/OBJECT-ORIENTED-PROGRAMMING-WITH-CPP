#include <iostream>
using namespace std;

int main() {
    // Create a pointer to an integer
    int* ptrToInt;

    // Allocate memory for the integer
    ptrToInt = new int;

    // Assign a value to the integer through the pointer
    *ptrToInt = 42;

    // Display the value of the integer through the pointer
    cout << "Value through pointer: " << *ptrToInt << endl;

    // Free the allocated memory
    delete ptrToInt;

    return 0;
}
