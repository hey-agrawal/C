#include<stdio.h>
int main()
{
int a,c=0,i,n;
printf("\nEnter a number to be checked:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c=c+1;
}
}
if(c==2) 
printf("\n%d is a prime number.");
else
printf("\n%n is not a prime number.");
return 0;
}