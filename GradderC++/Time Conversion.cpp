#include <iostream>
using namespace std;

int main(){
	int sec,a,b,c,minute,hour;
	
	cin >> a;
	sec = a%60;
	
	b = a/60;
	minute = b%60;
	
	hour = b/60;
	
	
	cout << hour <<" hour(s) "<< minute <<" minute(s) "<<sec<< " second(s)";
	
	return 0;
}
