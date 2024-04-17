#include <iostream>
using namespace std;
int num;
int main(){
	int num;
	cout<<"Enter an Integer: ";
	cin>> num;
	if(num % 2 == 0){
		cout<< num <<" is Even Number";
	}
	else {
		cout<< num <<" is Odd Number";
	}
	return 0;
}