#include <iostream>
using namespace std;
int main() {
    int num, sum = 0, divisor = 1;
    cout << "Enter a number: ";
    cin >> num;
    while (divisor < num) {
        if (num % divisor == 0) {
            sum += divisor;
        }
        divisor++;
    }
    if (sum == num) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }
    return 0;
}
