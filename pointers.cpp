#include <iostream>


int main() {
 int number;
 int *numberptr;

 
//const number2;
  number = 5;
  numberptr = &number;
  int& intRef = number;
  std::cout << "Number is " << number << "\n";
  std::cout << "Numberptr is " << numberptr << "\n"; 
  std::cout << &number<<"\n";

 std::cout <<++*numberptr<<"\n";
 //std::cout <<++ &number <<"\n";
 std::cout<<++ intRef<< "\n";
}
