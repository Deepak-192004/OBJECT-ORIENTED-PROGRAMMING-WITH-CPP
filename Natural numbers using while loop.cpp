#include <iostream>
using namespace std;
int main() {
    int n, sum = 0, i = 1;
    cout << "Enter the value of n: ";
    cin >> n;
    while (i <= n) {
        sum += i;
        i++;
    }
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}
