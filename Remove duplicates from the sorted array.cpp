#include <iostream>
using namespace std;

int main() {
    int A[10], B[10], n, k = 0;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];

    // Loop to remove duplicates
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < k; j++) {
            if (A[i] == B[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            B[k] = A[i];
            k++;
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++)
        cout << B[i] << " ";
    cout << endl;

    return 0;
}
