#include <iostream>
using namespace std;
// Function with default arguments
void greet(string name = "Guest", string greeting = "Hello") {
    cout << greeting << ", " << name << "!" << endl;
}
int main() {
    // Calling the function with both arguments provided
    greet("Alice", "Hi");
    // Calling the function with only one argument provided
    greet("Bob");
    // Calling the function without any arguments provided
    greet();
    return 0;
}
