#include <iostream>

int main() {
    int myInteger = 10;   
    float myFloat;         
    myFloat = static_cast<float>(myInteger);  
	std::cout << "Integer value: " << myInteger << std::endl;
    std::cout << "Float value: " << myFloat << std::endl;
	return 0;
}
