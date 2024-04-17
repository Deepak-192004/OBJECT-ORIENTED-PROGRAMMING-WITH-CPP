#include <iostream>

template<typename T>
T findMax(const T* array, size_t size) {
    T max = array[0];
    for (size_t i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    // Test with integer array
    int intArray[] = {4, 7, 2, 9, 5};
    size_t intSize = sizeof(intArray) / sizeof(int);
    std::cout << "Maximum element in integer array: " << findMax(intArray, intSize) << std::endl;

    // Test with float array
    float floatArray[] = {3.5f, 1.2f, 6.8f, 4.9f, 2.3f};
    size_t floatSize = sizeof(floatArray) / sizeof(float);
    std::cout << "Maximum element in float array: " << findMax(floatArray, floatSize) << std::endl;

    // Test with double array
    double doubleArray[] = {9.4, 2.7, 6.1, 3.8, 5.2};
    size_t doubleSize = sizeof(doubleArray) / sizeof(double);
    std::cout << "Maximum element in double array: " << findMax(doubleArray, doubleSize) << std::endl;

    return 0;
}
