#include <stdio.h>
int main()
{
    int number;
    scanf("%lf",&number);
    if (number % 2 == 0){
        printf ("even",number);
    }
    else if  (number % 2 ==1) {
        printf ("odd",number);
    }
    else
    {
        printf("error");
    }
}
