#include <iostream>
using namespace std;

int main(){
	long int meter;
	cin >> meter;
	if( meter >= 0 && meter <= 5 ){
		printf( "%.2lf baht",100.00);
	}
	else if( meter > 5){
		double sum= 0;
		sum = (meter-5) * 18.5;
		printf("%.2f baht",100+sum);
	}
	else{
		cout << "Error";
	}
	
	return 0;
}
