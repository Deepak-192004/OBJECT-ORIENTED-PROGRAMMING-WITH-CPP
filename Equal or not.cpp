#include <iostream>
using namespace std;
int main() {
	int num1, num2;
	cout<<"Enter the First Number: ";
	cin>> num1;
	cout<<"Enter the Second Number: ";
	cin>> num2;
	if(num1 == num2){
		cout<<"The Numbers " << num1 <<" and " << num2 <<" are Equal";
	}
	else{
		cout<<"The Numbers " << num1 <<" and " << num2 <<" are not Equal";
	}
	return 0;
}