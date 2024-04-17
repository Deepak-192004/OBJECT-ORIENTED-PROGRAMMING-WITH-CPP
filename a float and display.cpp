#include <iostream>
using namespace std;

int main() {
    // Create a pointer to a float
    float* ptrToFloat;

    // Allocate memory for the float
    ptrToFloat = new float;

    // Assign a value to the float through the pointer
    *ptrToFloat = 3.14f;

    // Display the value of the float through the pointer
    cout << "Value through pointer: " << *ptrToFloat << endl;

    // Free the allocated memory
    delete ptrToFloat;

    return 0;
}
