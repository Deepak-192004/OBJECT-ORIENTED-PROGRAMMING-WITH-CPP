#include <iostream>

using namespace std;

class Number {
protected:
    int start;
    int end;

public:
    Number(int start, int end) : start(start), end(end) {}

    virtual void printNumbers(int skip) = 0;
};

class Skipper : public Number {
public:
    Skipper(int start, int end) : Number(start, end) {}

    void printNumbers(int skip) override {
        for (int i = start; i <= end; i += skip) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    const int M = 50;
    const int N = 100;
    const int K = 7;

    Skipper skipper(M, N);
    cout << "Numbers from " << M << " to " << N << " skipping " << K << " numbers in between:" << endl;
    skipper.printNumbers(K);

    return 0;
}
