#include <iostream>
using namespace std;
int main() {
    int n, sum = 0, i = 1;
    // Prompt the user to enter the value of n
    cout << "Enter the value of n: ";
    cin >> n;
    // Calculate the sum of first n natural numbers using a do-while loop
    do {
        sum += i;
        i++;
    } while (i <= n);
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}
