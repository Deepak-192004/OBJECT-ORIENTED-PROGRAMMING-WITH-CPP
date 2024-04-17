#include <iostream>
using namespace std;

class DivisibleByNine {
public:
    DivisibleByNine() : count(0), sum(0) {
        findDivisibleNumbers();
        calculateSum();
    }

    ~DivisibleByNine() {
        cout << "Number of integers divisible by 9 between 100 and 200: " << count << endl;
        cout << "Sum of integers divisible by 9 between 100 and 200: " << sum << endl;
    }

private:
    int count;
    int sum;

    void findDivisibleNumbers() {
        for (int i = 100; i <= 200; i++) {
            if (i % 9 == 0) {
                count++;
            }
        }
    }

    void calculateSum() {
        for (int i = 100; i <= 200; i++) {
            if (i % 9 == 0) {
                sum += i;
            }
        }
    }
};

int main() {
    DivisibleByNine obj;
    return 0;
}

