#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int number[9],sumEven=0,sumOdd=0;
	for(int i=0;i <9;i++){
		cin >> number[i];
	}
	for(int i=0;i <9;i++){
		if(number[i]%2 ==1){
			sumOdd = sumOdd+number[i];
			cout <<  sumOdd << '.' << endl;
		
		}
		else if(number[i]%2 ==0){
			sumEven = sumEven+number[i];
			cout << sumEven << '_' << endl;
		}
	}
//	cout << sumOdd <<endl;
//	cout << sumEven << endl;
	
	
	
	return 0;
}
