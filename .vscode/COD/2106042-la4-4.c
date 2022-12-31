#include<stdio.h>
int main()
{
    int i,n,t1,t2;
    t1=1;
    printf("entre the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        t2=(t1*2)+1;
        printf("%d",t1);
        t1=t2;

    }
return 0;
}