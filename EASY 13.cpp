#include <iostream>
using namespace std;

class SeriesSumCalculator {
public:
    SeriesSumCalculator() : termCount(0), sum(0) {} // Default constructor
    SeriesSumCalculator(int n) : termCount(n) { calculateSum(); } // Constructor with term count

    void setTermCount(int n) {
        termCount = n;
        calculateSum();
    }

    int getSum() const {
        return sum;
    }

private:
    int termCount;
    int sum;

    void calculateSum() {
        sum = 0;
        for (int i = 1; i <= termCount; i++) {
            sum += i; // Example series: 1 + 2 + 3 + ... + n
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of terms in the series: ";
    cin >> n;

    SeriesSumCalculator calculator1; // Create an instance using default constructor
    calculator1.setTermCount(n); // Set term count using member function
    cout << "Sum using default constructor: " << calculator1.getSum() << endl;

    SeriesSumCalculator calculator2(n); // Create an instance using constructor with term count
    cout << "Sum using constructor with term count: " << calculator2.getSum() << endl;

    return 0;
}

