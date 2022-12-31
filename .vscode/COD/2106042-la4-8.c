#include<stdio.h>
int main()
{
    int n;int rev=0;
    printf("entre the value of n:");
    scanf("%d",&n);
    while(n>0)
    {
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("the reversal of the number is:%d",rev);
    return 0;
    
}