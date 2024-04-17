#include <iostream>
using namespace std;

// Class declaration
class Largest {
private:
    int a, b, m;

public:
    // Function to set data
    void setData(int x, int y, int z) {
        a = x;
        b = y;
        m = z;
    }

    // Friend function to find the maximum number
    friend void find_Max(Largest obj);
};

// Friend function definition
void find_Max(Largest obj) {
    int max_num = obj.a;

    if (obj.b > max_num)
        max_num = obj.b;
    if (obj.m > max_num)
        max_num = obj.m;

    cout << "The largest number is: " << max_num << endl;
}

int main() {
    Largest obj;

    // Setting data using setData function
    obj.setData(10, 20, 30);

    // Calling friend function to find the largest number
    find_Max(obj);

    return 0;
}
