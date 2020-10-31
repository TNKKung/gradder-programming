#include <iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	if(a==2||a==4||a==8||a==10||a==14||a==16||a==20||a==22||a==26||a==28){
		cout << "Castus";
	}
	else if(a==3||a==9||a==15||a==21||a==27){
		cout << "Bowstring Hemp";
	}
	else if(a==6||a==12||a==18||a==24||a==30){
		cout << "Both of them.";
	}
	else if(a==1||a==5||a==7||a==1||a==11||a==13||a==17||a==19||a==23||a==25||a==29){
		cout << "Nothing.";
	}
	else{
		cout << "Invalid data.";
	}
}
