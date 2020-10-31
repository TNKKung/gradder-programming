#include <iostream>

using namespace std;

int main(){
	int number[10]={},bag=0,a=0;
	
	for(int i=1;i<=number[10];i++){
		cin >> number[i];
	}
	for(int i=1;i<=number[10];i++){
		if((number[i]+number[i+1])>100){
			bag += 1;
			i++;
		}
		else if((number[i]+number[i+1])<100){
			a += number[i];
			if( ( a % 100 )== 0){
				bag += 1;
			}
		}	
	}
	cout << bag;
	
	
	return 0;
}
