#include <iostream>
#include <string>
using namespace std;


int number1, number2;

int input(){

	cout<<"Enter two numbers\n";
	cin>>number1;
	cin>>number2;
	int total = number1+number2;
	return total;
}

int main() {
	int totalSum =	input();	
	cout<<"The sum of " << number1 << " and " << number2 << " is " << totalSum << "\n";

}
