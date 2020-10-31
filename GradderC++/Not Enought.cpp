#include<iostream>
using namespace std;

int main(){
	double a=0,b=0;
	cin >> a ;
	b= a-180;
	if(b < 0){
		cout << "No";
	}
	else{
		printf("Yes %.2f Baht",b);
	}
}


