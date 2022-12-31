/* AUTHORE NAME-PRASOON AGRAWAL*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("entre the number a,b");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swipping a and b %d\n%d",a,b);
    return 0;

}