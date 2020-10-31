#include<stdio.h>
int main(){
    long St,G,X,i;
    scanf("%ld %ld %ld",&St,&G,&X);
    if(X<=0||St>G)printf("Go to hell");
    else if(X>G||St==G)printf("%ld",G);
    else {
        printf("%ld\n",St);
        i=St;
        while(i<G-X){
            if(i>=G)break;
            i=St+=X;
            printf("%ld\n",i);
        }
        printf("%ld\n",G);
    }
    return 0;
}
