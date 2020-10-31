#include <iostream>
using namespace std;
char checkUnivercity(long int a){
	if(a >= 20000){
		return 'A';
	}
	if(a >= 17500){
		return 'B';
	}
	if(a >= 18000){
		return 'C';
	}
	if(a >= 28250){
		return 'D';
	}
	if(a >= 27000){
		return 'E';
	}if(a >= 25000){
		return 'F';
	}
	if(a >= 21750){
		return 'G';
	}
	if(a >= 22000){
		return 'H';
	}
}
int main(){
	long int scoreAdd;
	char Univercity[4][1000];
	cin >> scoreAdd;
	for(int i=0;i < 4;i++){
		cin >> Univercity[i];
	}
	cout << checkUnivercity(scoreAdd);
	
	return 0;
}
