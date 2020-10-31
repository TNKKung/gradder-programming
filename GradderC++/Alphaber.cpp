#include <iostream>
using namespace std;

int main(){
	int number[5];
	for(int i=0;i<5;i++){
		cin >> number[i];
	}
	for(int i=0;i<5;i++){
		printf("%c",number[i]+96);
		cout << endl;
	}
	
	return 0;
}
