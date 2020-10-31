#include <iostream>
#include <stdio.h>
#define BANNED(func)
using namespace std;

int main(){
	double a,c=0;
	long int b;
	bool i=false;	
	while(i==false){
		cin >> a ;
		if(a>=0 ){			
			i=true;	
		}
		else{
			system("cls");
			i=false;
		}	
	}
	if(i==true){
		b = a/8;
		if(a%8 != 0){
		 
		 b+=1;
		}
		cout << b;
	}
	return 0;
}
