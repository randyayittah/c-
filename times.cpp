#include <iostream>

int getNum(){
	int number;
	
	  std::cout<< "Please enter a number greater than 0: " ;
	  std::cin >> number;
	while(number<0){
	
     	    std::cout<< "Please enter a number greater than 0: " ;
            std::cin >> number;     
	
	}
	return number;
}
int main(){
	int num1 = getNum();

	if(num1%2==0){
		for(int num = 1; num<=20; num++){

		float mult = num1 * num;
      		std::cout << num << " * " <<  num1 << " = " << mult << "\n";
		}

	}
	else{
           int counter =0;
	  int number =1;
	  while(counter<30){
		if(number%num1!=0){
			std::cout<< number << "\n";
			number++;
			counter++;
		
			}
	else{
		number++;
	}

	 


	}
}

}
