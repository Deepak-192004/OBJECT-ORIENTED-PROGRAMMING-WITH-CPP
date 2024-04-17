#include <iostream>
#include <regex>

bool regex_match(const std::string& input_str, const std::string& pattern) {
    std::regex regex_pattern(pattern);
    return std::regex_match(input_str, regex_pattern);
}

int main() {
    std::string input_str = "a";
    std::string pattern = "a";
    
    std::cout << std::boolalpha << regex_match(input_str, pattern) << std::endl; // Output: false

    return 0;
}