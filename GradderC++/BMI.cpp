#include <iostream>
#include<stdio.h> 
using namespace std;
int main() { 
    double a,b,c,d;
    cin >> a>>b;
    c=b/100;
    d=a/c;
    if(d>=30){
    	printf("%.6lf\n",d);
    	cout << "Obesity";
	}
	else if(d>=25&&d<30){
    	printf("%.6lf\n",d);
    	cout << "Overweight";
	}
	else if(d>=18.5&&d<25){
    	printf("%.6lf\n",d);
    	cout << "Normal";
	}
	else if(d<18.5){
    	printf("%.6lf\n",d);
    	cout << "Underweight";
	}
    return 0;
}
