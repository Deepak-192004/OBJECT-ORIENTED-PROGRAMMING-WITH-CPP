#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    string name;
    double price;

public:
    // Default constructor
    Product() {}

    // Parameterized constructor
    Product(string productName, double productPrice) : name(productName), price(productPrice) {}

    // Function to get product details
    void get_product() {
        cout << "Enter product name: ";
        getline(cin, name);
        cout << "Enter product price: ";
        cin >> price;
        cin.ignore(); // Ignore newline character left in the input buffer
    }

    // Function to print product details
    void print_product() {
        cout << "Product: " << name << ", Price: $" << price << endl;
    }
};

int main() {
    const int ARRAY_SIZE = 3; // You can change the array size as needed
    Product products[ARRAY_SIZE];

    // Get product details
    cout << "Enter details for " << ARRAY_SIZE << " products:" << endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cout << "Product " << i + 1 << ":" << endl;
        products[i].get_product();
    }

    // Print product details
    cout << "\nProducts Information:" << endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cout << "Product " << i + 1 << ": ";
        products[i].print_product();
    }

    return 0;
}
