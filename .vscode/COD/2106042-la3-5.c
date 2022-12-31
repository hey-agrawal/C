#include<stdio.h>
int main()
{
int a,b,c;
char op;
printf("Enter first number : ");
scanf("%d",&a);
printf("Enter second number : ");
scanf("%d",&b);
printf("Enter  any operator from + , - , * , / ,% ");
scanf(" %c",&op);
if(op=='+')
{
c=a+b;   
printf("Sum of %d and %d = %d ",a,b,c);
 }
 else if(op=='-')
 {
 c=a-b;   
 printf("Subtraction of %d and %d = %d ",a,b,c);
 }
 else if(op=='*')
{
 c=a*b;   
printf("Multiplication of %d and %d = %d",a,b,c);
}
else if(op=='/')
{
c=a/b;   
printf("%d divided by %d = %d ",a,b,c);
}                                
else if(op=='%')
{
c=a%b;   
printf("Remainder of %d divided by %d = %d ",a,b,c);
}
else
{
printf("INVALID OPERATOR!! Please enter correct one");
}
return 0;
}
