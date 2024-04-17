#include <iostream>
#include <stdexcept>

class Resource {
public:
    Resource() {
        std::cout << "Resource Acquired" << std::endl;
    }

    ~Resource() {
        std::cout << "Resource Released" << std::endl;
    }
};

void useResource() {
    Resource res;
    // Simulating an exception
    throw std::runtime_error("Something went wrong");
}

int main() {
    try {
        useResource();
    } catch(const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
