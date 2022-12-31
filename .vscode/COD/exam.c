#include<stdio.h>
int main()
{
    int a,b,hcf,lcm,x,y,t;
    printf("entre the numbers");
    scanf("%d%d",&a,&b);
    a=x;
    b=y;
    while(a=!0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    hcf=a;
    lcm=a*b/hcf;
    printf("Greatest common divisor %d\n",hcf);
    printf("Least common multiple %d\n",lcm);
    return 0;
    
}