#include <iostream>
#include <stdio.h>
#define BANNED(func)
using namespace std;

int main(){
	char arr[30]={};
	int a=0,b=30;
	cin >> arr;
	for(int i = 0;i < 30; i++){
		if(arr[i]>=' '&&arr[i]<='~'){
			a++;
		}
	}
	cout << a;
	b -= a;
	for(int j=0;j<b;j++){
		cout <<" ";
	}
	cout << arr;
	
	return 0;
}
