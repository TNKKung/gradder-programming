#include <stdio.h>
#include <string.h>
int main(){
    char input[100][10001];
    char find[]={"Stop"};
    int i,k=0,x=0;
    i=0;
    while(1){
        scanf("%s",input[i]);
        if(strstr(input[i],find))break;
        i++;
        k++;
    }
    for(i=0;i<k;i++){
        x+=strlen(input[i]);
        printf("%*s\n",x,input[i]);
    }
    return 0;
}
