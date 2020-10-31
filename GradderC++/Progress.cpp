#include<stdio.h>
int main()
{
    char nickname[1000];
    int distance,total,run;
    scanf ("%s",&nickname);
    scanf ("%d",&distance);
    scanf ("%d",&run);
    total = (run/distance)*100;
    printf ("%s %d%%",nickname,total);
}
