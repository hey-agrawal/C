/*Author: Prasoon
program: WAP to display the array elements in reverse order. */
#include<stdio.h>
int main()
	{
	int n,i,max;
	printf("Enter the size of array(N): ");
	scanf("%d",&n);
	int arr[n];
	//INPUT
		for(i=0;i<n;i++)
		{
			printf("ENTER %d element of ARRAY : ",i+1);
			scanf("%d",&arr[i]);
		}
	//DISPLAY
	for(i=n-1;i>=0;i--)
		printf("%d\t",arr[i]);
	return 0;
	}
