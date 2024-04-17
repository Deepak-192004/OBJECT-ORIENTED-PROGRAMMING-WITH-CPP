#include <iostream>
using namespace std;

class Grandfather {
public:
    Grandfather(double propertyValue) : property(propertyValue) {}

    double getProperty() const {
        return property;
    }

protected:
    double property;
};

class Grandson : public Grandfather {
public:
    Grandson(double propertyValue) : Grandfather(propertyValue) {}

    double receiveProperty() {
        double receivedProperty = getProperty(); // Access property through inheritance
        return receivedProperty;
    }
};

int main() {
    double propertyValue = 500; // 500Cr property value

    Grandson grandson(propertyValue);
    double receivedProperty = grandson.receiveProperty();

    cout << "Received the Property: " << receivedProperty << "Cr" << endl;

    return 0;
}

