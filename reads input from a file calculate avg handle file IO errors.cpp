#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>

// Function to calculate the average of numeric data in a vector
double calculateAverage(const std::vector<double>& data) {
    double sum = 0.0;
    for (double value : data) {
        sum += value;
    }
    return sum / data.size();
}

int main() {
    std::string filename;
    std::cout << "Enter the name of the file: ";
    std::cin >> filename;

    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file." << std::endl;
        return 1;
    }

    std::vector<double> numbers;
    double num;
    while (file >> num) {
        numbers.push_back(num);
    }

    try {
        if (numbers.empty()) {
            throw std::invalid_argument("No numeric data found in the file.");
        }

        double average = calculateAverage(numbers);
        std::cout << "Average of the numeric data: " << average << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid data: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "An error occurred while calculating the average." << std::endl;
    }

    file.close();
    return 0;
}

