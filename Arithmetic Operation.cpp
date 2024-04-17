#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout<<"Eneter the First Number:";
	cin>> num1;
	cout<<"Enter the Second Number:";
	cin>> num2;
	cout<<"Addition: " << num1 + num2 << endl;
    cout<<"Subtraction: " << num1 - num2 << endl;
	cout<<"Multiplication: " << num1 * num2 << endl;
	if(num2 != 0) {
		cout<<"Division: " << num1 / num2 << endl;
		cout<<"Modulo: " << num1 % num2 << endl;
	}
	return 0;		 
}