#include <iostream>
#include <string>
using namespace std;

// Inline function to check if a string is a palindrome
inline bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string inputString;
    char choice;

    do {
        cout << "Enter a string to check if it's a palindrome: ";
        getline(cin, inputString);

        if (isPalindrome(inputString)) {
            cout << "The string \"" << inputString << "\" is a palindrome." << endl;
        } else {
            cout << "The string \"" << inputString << "\" is not a palindrome." << endl;
        }

        cout << "Do you want to check another string? (Y/N): ";
        cin >> choice;
        cin.ignore(); // Clear the newline character from the input buffer
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

