#include<stdio.h>

int main(){

    int i,j,a1,a2,b,c,d,g=0,k;

    scanf("%d",&a1);

    scanf("%d",&a2);

    b = a2*a2-1;

    for (i=1;i<=a1*a2;i++){

       for (j=1;j<=b;j++){

            printf(" ");

        }

        b--;

        if(i==a1+1||d>a1-1){

            c = 1;

            d = 0;

            g += 1;

        }

        if(i<=a1){

            for(j=1;j<=i*2-1;j++){

                printf("*");

            }

        }

        if(i>a1){

            for (k=1;k<=g;k++){

                for(j=1;j<=c*2-1;j++){

                    printf("*");

                }

                for (j=1;j<=2*(a1-c)+1;j++){

                    printf(" ");

                }

            }

            for (j=1;j<=c*2-1;j++){

                printf("*");

            }

            d+=1;

        }

        c+=1;

        printf("\n");

    }

    return 0;
}
