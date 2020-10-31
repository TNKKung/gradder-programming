#include <iostream>
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
using namespace std;
int main(){

    double A1,A2,D1,D2,D3,D4,D5;
    cin >> D3>>D4;
    D1 = D3 / 2;
    D2 = D4 / 2;
    A1 = ((M_PI*D1*D1*D1)*4)/3 ;
    A2 = ((M_PI*D2*D2*D2)*4)/3 ;
    D5 = A1-A2;
    if(D5 >= 0){
    printf("%.3lf",D5);
	}
	else{
		printf("%.3lf",D5*-1);
	}	
return 0;
}
