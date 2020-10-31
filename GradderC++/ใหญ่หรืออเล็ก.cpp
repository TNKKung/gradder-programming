#include <iostream>
using namespace std;

int main(){
	char charArr[58];
	int count1=0,count2=0;
	scanf("%[^\n]s",charArr);
	for(int i=0;i<58;i++){
		if(charArr[i]>='A' && charArr[i] <='Z'){
			count2++;
		}
		else if(charArr[i]>='a' && charArr[i] <='z'){
			count1++;
		}
	}
	cout << "Capital letter = " << count2 <<endl;
	cout << "Lower-case letter = "<<count1;
	return 0;
}
