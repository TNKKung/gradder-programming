#include <iostream>
#include <math.h>
using namespace std;
double negativeCheck(double a){
	if(a < 0){
		return a*-1;
	}
	else{
		return a;
	}
}
int main(){
	double x1,x2,y1,y2,X,Y,lenght;
	cin >> x1 >> y1 >> x2 >> y2;
	X = x2-x1;
	Y = y2-y1;
	lenght = (negativeCheck(X)*negativeCheck(X))+(negativeCheck(Y)*negativeCheck(Y));
	printf("%.3lf",sqrt(lenght));
}
