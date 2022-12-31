#include<stdio.h>
int main()
{
    int i,n,t1,t2,t3;
    t1=1;
    t2=1;
    printf("entre the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        t3=t1+t2;
        printf("%d",t1);
        t1=t2;
        t2=t3;
    }
return 0;
}