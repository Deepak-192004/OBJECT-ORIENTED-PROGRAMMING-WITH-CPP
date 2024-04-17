#include <iostream>
#include <vector>
#include <string>

void generateParentheses(int left, int right, std::string current, std::vector<std::string>& result) {
    // Base case: if both left and right parentheses are used up
    if (left == 0 && right == 0) {
        result.push_back(current);
        return;
    }

    // Add left parenthesis if available
    if (left > 0)
        generateParentheses(left - 1, right, current + '(', result);

    // Add right parenthesis if available and there are more left parentheses than right
    if (right > 0 && left < right)
        generateParentheses(left, right - 1, current + ')', result);
}

std::vector<std::string> generateParentheses(int n) {
    std::vector<std::string> result;
    generateParentheses(n, n, "", result);
    return result;
}

int main() {
    int n = 3;
    std::vector<std::string> combinations = generateParentheses(n);

    std::cout << "Combinations of well-formed parentheses for n = " << n << ":" << std::endl;
    for (const auto& combination : combinations) {
        std::cout << combination << std::endl;
    }

    return 0;
}
