#include <iostream>
#include <string>

using namespace std;

class StringConverter {
private:
    string inputString;
public:
    StringConverter(string str) {
        inputString = str;
    }

    void toUpperCase() {
        for (int i = 0; i < inputString.length(); i++) {
            if (islower(inputString[i])) {
                inputString[i] = toupper(inputString[i]);
            }
        }
    }

    void toLowerCase() {
        for (int i = 0; i < inputString.length(); i++) {
            if (isupper(inputString[i])) {
                inputString[i] = tolower(inputString[i]);
            }
        }
    }

    int countCapitalLetters() {
        int count = 0;
        for (char c : inputString) {
            if (isupper(c)) {
                count++;
            }
        }
        return count;
    }

    string getString() {
        return inputString;
    }
};

int main() {
    string input;
    cout << "Enter the string: ";
    getline(cin, input);

    StringConverter converter(input);

    int choice;
    cout << "Choose operation:\n1. Convert to Upper Case\n2. Convert to Lower Case\n";
    cin >> choice;

    switch (choice) {
        case 1:
            converter.toUpperCase();
            break;
        case 2:
            converter.toLowerCase();
            break;
        default:
            cout << "Invalid choice\n";
            return 1;
    }

    cout << "Converted string: " << converter.getString() << endl;
    cout << "Number of capital letters: " << converter.countCapitalLetters() << endl;

    return 0;
}
