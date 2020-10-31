#include<iostream>
using namespace std;
double piecewise(double a){
	if(a <= -1){
		return (a*a)+1;
	}
	else if(a >= 1 && a < 2){
		return a+4;
	}
	else if(a >= 2){
		return 5;
	}
}
int main(){
	double a;
	cin >> a;
	
	printf("%.2f", piecewise(a)); 
}


