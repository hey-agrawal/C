/*6. WAP to print all Strong numbers between 1 to n.

AUTHOR-PRASOON AGRAWAL*/

#include<stdio.h>
int main()
{
    int range1,range2,i,j;
    printf("Enter a range:");
    scanf("%d %d", &range1, &range2);
    printf("Strong numbers between %d and %d are: ",range1,range2);
    for(i=range1;i<=range2;i++)
    {
    int num2=i;
    int num1=i;
    int sum=0;
    int fact=1;
   while(num1!=0)
   {   fact=1;
       int rem=num1%10;
       num1=num1/10;
       for(j=1;j<=rem;j++)
        fact=fact*j;
       sum=sum+fact;
   }
   if(sum==num2)
    printf("%d ",i);
    }
    return 0;

}
