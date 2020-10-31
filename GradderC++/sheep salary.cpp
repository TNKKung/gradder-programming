#include <iostream>
using namespace std;
double calculate(double a){
	double b=0;
	b=a*12;	
	if(b <= 150000){
		return 0;
	}
	else if(b>150000 && b<=300000){
		return 0.05;
	}
	else if(b>300000 && b<=500000){
		return 0.10;
	}
	else if(b>500000 && b<=750000){
		return 0.15;
	}
	else if(b>750000 && b<=1000000){
		return 0.20;
	}
	else if(b>1000000 && b<=2000000){
		return 0.25;
	}
	else if(b>2000000 && b<=5000000){
		return 0.30;
	}
	else if(b>5000000){
		return 0.35;
	}
}
int main(){
	double a,b;
	cin >> a;	
	b = (float)calculate(a)*a;
	printf("%.2lf",a-b);	
	return 0;
}
