#include <iostream>
int getNum(){
	int number;
	std::cout << "Please enter a number: ";
	std::cin >> number;
	return number;	

}
int main(){
	int num1 = getNum();
	int num2 = getNum();
	int num3 = getNum();
	int num4 = getNum();
	int num5 = getNum();

	int totalSum = num1 + num2+num3+num4+num5;
	float MeanNum = totalSum/5;
	std::cout << "MEAN:";
	std::cout << MeanNum;
        //std::cout << "Num1: " + num1;
	//std::cout << "Num2: " + num2;
	//std::cout << "Num3: " + num3;





}
