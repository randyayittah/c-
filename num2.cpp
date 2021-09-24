#include <iostream>
#include <string>
using namespace std;

/*
int getNumbers(int arr[5]){
	for(int index=0;index<5;index++){
		std::cout << "Enter 5 numbers\n";
		std::cin>>arr[index];
	//print array element
	for(int n =0; n<5;n++){
		std::cout<<n=arr[n];
	}




}*/
int main(){
	
	int numbers[5];
	cout<<"Enter five numbers:\n";

	for(int index =0;index<5;index++){
	
	cin>>numbers[index];
	
	
	}
return 0;
}
/*float getMean(float arr[]){
	int len = sizeof(arr)/sizeof(arr[0]);
	int sum = 0;
	for(int u=0; u<len; u++){
	sum+=arr[u];

	}
	float mean = sum/len;
	return mean;	

}
int main(){
     int numbers[5];
     
     std::cout<<"Enter 5 numbers to calculate mean mode and median\n";
     for(int i =0; i<sizeof(numbers)/sizeof(numbers[0]); i++){
	     std::cin>>numbers[i];
	  }
     float mean = getMean(numbers);
     std::cout << "Mean is " <<mean;
		
}*/
