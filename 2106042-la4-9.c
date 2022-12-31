#include<stdio.h>
int main()
{
    int n;int r=0;
    printf("entre the value of n:");
    scanf("%d",&n);
    int s=n;
    while(n>0)
    {
        int d=n%10;
        r=r+d*d*d;
        n=n/10;
    }
    if(s==r)
    {
        printf("the aermstrong number is:%d",r);
    }
    else
    {
        printf("it is not armstrong number");
    }
    return 0;
}