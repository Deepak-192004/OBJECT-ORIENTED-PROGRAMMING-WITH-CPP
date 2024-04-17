#include <iostream>
#include <string>
using namespace std;
string reverseString(string str) {
    int length = str.length();
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    return str;
}
int main() {
    string input;
    cout << "Enter a string to reverse: ";
    getline(cin, input);
    string reversed = reverseString(input);
    cout << "Reversed string: " << reversed << endl;
    return 0;
}
