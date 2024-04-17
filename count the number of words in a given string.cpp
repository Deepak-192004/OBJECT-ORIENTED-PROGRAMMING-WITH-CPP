#include <iostream>
#include <string>
#include <sstream>

int countWords(const std::string& str) {
    std::stringstream ss(str); // Using stringstream to tokenize the string
    std::string word;
    int count = 0;

    // Counting words by extracting tokens separated by whitespace
    while (ss >> word) {
        count++;
    }

    return count;
}

int main() {
    std::string input_string;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input_string);

    int word_count = countWords(input_string);
    std::cout << "Number of words in the string: " << word_count << std::endl;

    return 0;
}
