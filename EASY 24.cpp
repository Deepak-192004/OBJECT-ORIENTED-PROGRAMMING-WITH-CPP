#include <iostream>
using namespace std;

int main() {
    int var1 = 10;
    char var2 = 'A';
    float var3 = 3.14;

    cout << "Address of var1: " << &var1 << endl;
    cout << "Address of var2: " << (void*)&var2 << endl; // Use (void*) for pointer to char
    cout << "Address of var3: " << &var3 << endl;

    return 0;
}

