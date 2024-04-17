#include <iostream>

using namespace std;

int main() {
    int a, b;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    try {
        if (b == 0) {
            throw "Division by zero error";
        }
        
        cout << "Result of division: " << a / b << endl;
    }
    catch (const char* msg) {
        cerr << "Exception caught: " << msg << endl;
    }
    
    return 0;
}
