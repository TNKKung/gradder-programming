#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long int number,sum;
	cin >> number;
	sum = pow(number,2);
	for(int i =1;i <=sum;i++){
		cout << i<<endl;
	}
	
	return 0;
}
