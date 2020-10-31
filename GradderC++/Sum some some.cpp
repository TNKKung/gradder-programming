#include<stdio.h> 
#include<iostream>
using namespace std;
int main() { 
	int a,b,c;
	
	scanf("%d %d",&a,&b);
	if(a<b){
	for(int i=a;i<=b;i++){
		c+=(i*i);
	}
    }
    if(b<a){
	for(int i=b;i<=a;i++){
		c+=(i*i);
	}
    }
    if(a==b){
    	c=a*b;
	}
    
    cout << c;
    
   

	
    return 0;
}
