#include<stdio.h>
#include<string.h>
int main()
{
  char st[50];
  int i,j,k,l;
  printf("Enter a string\n");
  gets(st);
  int n=strlen (st);
  for (i=0;i<=2*n-1;i++)
  {
  	if(i<n)
  	{
  		for (j=0;j<n-i;j++)
  		printf("%c",st[j]);
  		for (j=0;j<i;j++)
  		printf("  ");
  		for (j=n-i-1;j>=0;j--)
  		printf("%c",st[j]);
  	}
  	if(i>n)
  	{
  		for (j=0;j<=i-n;j++)
  		printf("%c",st[j]);
  		for(j=1;j<n-(i-n);j++)
  		 printf("  ");
  		 for (j=i-n;j>=0;j--)
         printf("%c",st[j]);
		 	  }
	   if (i==n)
	   continue;
	   printf("\n");
	   
	  
	}
  }