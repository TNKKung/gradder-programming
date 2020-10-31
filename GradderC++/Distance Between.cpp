#include<stdio.h> 
#include<iostream>
using namespace std;
int main() { 
	int r;
   	double pi = 3.1415926535897932384626433,b;
   	
	cin >> r;
	b=(((pi*(r*r*r)*4)))/3;
	printf("%.6f",b);
    
    return 0;
}
