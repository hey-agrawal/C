/*LA7.4 WAP to calculate x^y by writing a function(say POWER) for it.
AUTHOR-Prasoon Agrawal*/

#include <stdio.h>
int power(int base, int exponent){
int result=1;
for(exponent; exponent>0; exponent--){
result = result * base;
}
return result;
}
int main()
{
int base, exponent;
printf("Enter a base number: ");
scanf("%d", &base);
printf("Enter an exponent: ");
scanf("%d", &exponent);
int res = power(base, exponent);
printf("Answer = %lld", res);
return 0;
}
