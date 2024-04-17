#include <iostream>
#include <string>
using namespace std;
int countElements(const string& str) {
    return str.length();
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    int count = countElements(input);
    cout << "Number of elements in the string: " << count << endl;
    return 0;
}
