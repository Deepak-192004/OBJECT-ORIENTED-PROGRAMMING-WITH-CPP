#include <iostream>
using namespace std;

int main() {
    // Create a pointer to a char
    char* ptrToChar;

    // Allocate memory for the char
    ptrToChar = new char;

    // Assign a value to the char through the pointer
    *ptrToChar = 'A';

    // Display the value of the char through the pointer
    cout << "Value through pointer: " << *ptrToChar << endl;

    // Free the allocated memory
    delete ptrToChar;

    return 0;
}
