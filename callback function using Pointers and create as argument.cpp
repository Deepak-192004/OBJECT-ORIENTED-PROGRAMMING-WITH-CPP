#include <iostream>

// Define the callback function signature
typedef void (*CallbackFunction)(int);

// Function that takes a callback function as an argument and calls it
void performTask(CallbackFunction callback) {
    std::cout << "Performing a task..." << std::endl;
    
    // Simulate some task completion
    int result = 42;

    // Call the callback function with the result
    callback(result);
}

// Example callback function
void callbackFunction(int result) {
    std::cout << "Callback function called with result: " << result << std::endl;
}

int main() {
    // Pass the callback function to the performTask function
    performTask(callbackFunction);

    return 0;
}
