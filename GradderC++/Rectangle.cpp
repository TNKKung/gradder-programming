#include<stdio.h>

double a,b;
double Area;
int main(){
	scanf("%lf %lf",&a,&b);
	Area=a*b;
	if(a >= 0&&b>=0){
	printf("Area = %.6lf x %.6lf = %.6lf",a,b,Area);
	}	
	else{
		printf("Error");
	}
}


