#include<stdio.h>

int main() { 
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a < b){
    	while(a != 0 && a <= b){
    	c+=a;	
		a++;	
		}
    }
    else if(b < a){
    	while(b != 0 && b <= a){
    	c+=b;
		b++;	
		}
	}   
   else if(a == b){
   		while(a != 0 && a <= b){
    	c+=a;
		a++;	
		}
   }
	printf("%d",c);
 
}
