#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	char arr[20]={};
	int a=0,b=18,c=0;

	scanf(" %[^\n]s ",arr);
	
	cout << "|====================|\n";
	cout << "|                    |\n";
	cout << "|" ;
	for(int i = 0;i < 30; i++){
		if(arr[i]>=' '&&arr[i]<='~'){
			a++;
		}
	}
	cout << a;
	b = b-a;
	b += 1;

	if(b%2==0){
		c = b/2;
		for(int j=0;j<=c;j++){
		cout <<" ";
		}
		cout << arr;
		for(int j=0;j<=c;j++){
		cout <<" ";
		}
		
	}
	else{
		c = b/2;

		for(int a=0;a<=c+1;a++){
		cout <<" ";
		}
		cout << arr;
		for(int a=0;a<=c;a++){
		cout <<" ";
		}
	}
			

	cout << "|\n" ;
	cout << "|                    |\n";
	cout << "|====================|\n";
	
}
