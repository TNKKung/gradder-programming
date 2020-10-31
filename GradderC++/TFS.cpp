#include <iostream>
#include <cmath>

using namespace std;


int main(){
	int a,b;
	cin >> a;
	
	if(a%3 != 0 && a%5 != 0 && a%7 != 0){
		cout << '0';
	}
	else if(a%3 == 0 && a%5 != 0 && a%7 != 0){
		cout << '1';
	}
	else if(a%3 != 0 && a%5 == 0 && a%7 != 0){
		cout << '2';
	}
	else if(a%3 == 0 && a%5 == 0 && a%7 != 0){
		cout << '3';
	}
	else if(a%3 != 0 && a%5 != 0 && a%7 == 0){
		cout << '4';
	}
	else if(a%3 == 0 && a%5 != 0 && a%7 == 0){
		cout << '5';
	}
	else if(a%3 != 0 && a%5 == 0 && a%7 == 0){
		cout << '6';
	}
	else if(a%3 == 0 && a%5 == 0 && a%7 == 0){
		cout << '7';
	}
	

	

    return 0;
}
