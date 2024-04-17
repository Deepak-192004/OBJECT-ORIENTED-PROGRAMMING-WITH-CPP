#include <iostream>
#include <string>
using namespace std;

bool isValidUsername(const string& username) {
    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;

    for (size_t i = 0; i < username.length(); i++) {
        char ch = username[i];
        if (isupper(ch)) {
            hasUpperCase = true;
        } else if (islower(ch)) {
            hasLowerCase = true;
        } else if (isdigit(ch)) {
            hasDigit = true;
        } else if (ispunct(ch) || ch == ' ') {
            hasSpecialChar = true;
        }
    }

    return hasUpperCase && hasLowerCase && hasDigit && hasSpecialChar;
}

int main() {
    string username, reenteredUsername;

    cout << "Enter the username: ";
    getline(cin, username);

    cout << "Reenter the username: ";
    getline(cin, reenteredUsername);

    if (username == reenteredUsername && isValidUsername(username)) {
        cout << "Username is Valid" << endl;
    } else {
        cout << "Username is Invalid" << endl;
    }

    return 0;
}

