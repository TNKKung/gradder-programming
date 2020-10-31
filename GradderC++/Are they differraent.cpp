#include <iostream>
#include <math.h>
using namespace std;

int main(){
	char oneChar,twoChar;
	int count=0;
	cin >> oneChar >> twoChar;
	count = oneChar - twoChar;
	
	if(abs(count) == 0 || abs(count) == 32){
		cout << oneChar << "' and '" << twoChar << "' are the same character.";
	}
	else{
		cout << "TOO DIFFERENCE!!";
	}
	return 0;
}
