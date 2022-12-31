/*LA7.5 WAP to generate all the prime numbers between 1 and n by using a user defined function (say isPRIME) to be used for prime number testing, where n is a value supplied by the user.
AUTHOR-Prasoon Agrawal*/

#include <stdio.h>
int main()
{
	int num,res=0;
	printf("\nENTER A NUMBER: ");
	scanf("%d",&num);
	res=prime(num);
	if(res==0)
		printf("\n%d IS A PRIME NUMBER",num);
	else
		printf("\n%d IS NOT A PRIME NUMBER",num);
	getch();
}
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}

