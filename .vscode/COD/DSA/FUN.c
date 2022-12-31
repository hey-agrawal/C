#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("\n enter the three number ");
    scanf("%d%d%d",&a,&b,&c);
    sum=r(a,b,c);
    printf("\n sum=%d",sum);
    return 0;

}
int r(int x,int y,int z)
{   
     return (x+y+z);
}