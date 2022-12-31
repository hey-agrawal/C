#include<stdio.h>
int main()
{
	int n,i,j,k,t=1;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=1;j<(n-i);j++)
		printf("  ");                             
		for (k=0;k<=i;k++)
		{
			if (k==0){
			t=1;   
			}          
			else
			t= t*(i-k+1)/k; 
		  printf("%4d",t);	
		}
		printf("\n");
	}
	return 0;
}