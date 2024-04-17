#include <iostream>
using namespace std;
int main() { 
	int num;
	cout<<"Enter the Integer: ";
	cin>> num;
	if(num > 0) {
		cout<< num <<" is Positive number";
	}
	else if(num < 0){
		cout<< num <<" is Negative number";
	}
	else{
		cout<< num <<" is Zero";
	}
	return 0;
}