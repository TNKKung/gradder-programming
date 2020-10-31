#include <iostream>
using namespace std;
int main(){
	int N=0,n=0,a;
	
	cin >> N;
	
	for(int i=1;i<=N-1;i++){
		if(N%i == 0){
			a = a+i;
		
		}
	
		
	}
	cout << a<<endl;
	return 0;
	
	
}
