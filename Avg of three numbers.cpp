#include <iostream>
using namespace std;
int main() {
	int num1, num2, num3;
	float average;
	cout<<"Enter the First Number:";
	cin>> num1;
	cout<<"Enter the Second Number:";
	cin>> num2;
	cout<<"Enter the Third Number:";
	cin>> num3;
	average = (num1 + num2 + num3) / 3.0;
	cout<<"The Average of " << num1 <<" ," << num2 <<" ," << num3 <<" ," <<" is " << average;
	return 0;
}