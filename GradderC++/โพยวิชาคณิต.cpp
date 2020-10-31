#include <iostream>
using namespace std;
int main(){
	int number = 0;	
	cin >> number;
	if(number){
	for(int i=1;i<=12;i++){
		printf("%d x %d = %d\n",number,i,number*i);
	}
    }
	else{
    	cout << "Error";
    }
	return 0;	
}
