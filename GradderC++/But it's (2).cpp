#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	double a,b,c=0;
	bool i=false;
	
	while(i==false){
		cin >> a >> b;
		if(a>=0 ){
			
			i=true;
			
		}
		else{
			system("cls");
			i=false;
		}
		
	}
	if(i==true){
		c=a-(400*b);
		if(c < 0){
			c=0;
			printf("LP: %.4f",c);
		}
		else{
			printf("LP: %.4f",c);
		}
	}
	return 0;
}
