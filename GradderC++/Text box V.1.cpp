#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
 
	char a[3]={};
	bool check = false;
	cin >> a;
		if(a[3]){
		
			check = false;
		}
		else if(((a[0]>='A'&& a[0]<='Z')||(a[0]>='a'&& a[0]<='z'))&&((a[1]>='A'&& a[1]<='Z')||(a[1]>='a'&& a[1]<='z'))&&((a[2]>='A'&& a[2]<='Z')||(a[2]>='a'&& a[2]<='z'))){
			check = true;
		}
		else{
			check = false;
		}
	
	if(check == true){
		
			cout << "*****"<<endl;
			cout << "*";	
			for(int i=0;i<=2;i++){
			cout <<	a[i];
			}
			cout <<"*"<<endl;
			cout << "*****"<<endl;
		
		
	}
	else {
		cout << "Error";
	}
	
	
	
		
    return 0;
}
