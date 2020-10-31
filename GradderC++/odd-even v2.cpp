#include <iostream>
#include <stdio.h>
#include <math.h>
#define BANNED(func)
using namespace std;

int main(){
	float number;
	cin >> number;
	if((int)number % 2 == 0){
		cout << "even";
	}
	else if(number > floor(number) && number < ceil(number)){
		cout << "Error";
	}
	else{
		cout << "odd";
	}
	return 0;
}
