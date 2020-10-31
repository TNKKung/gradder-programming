#include <iostream>
#include <stdio.h>
#define BANNED(func)
using namespace std;

int main(){
	long int a;	
	double b;
	cin>>a>>b;	
	if( a > 4 && b >600){
		cout << "Promotion: Yes"<<endl;
		printf("Price: %.2f baht",(double)b-(b*0.1));
	}
	else{
		cout << "Promotion: No"<<endl;
		printf("Price: %.2f baht",(double)b);
	}

	return 0;
}
