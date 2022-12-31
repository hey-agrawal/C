/*Author: PRASOON
Program: WAP to find out the largest even integer stored in the array of n
 integers. n is the user input.*/
#include<stdio.h>
int main()
	{
	int n,i,max;
	printf("Enter the size of array(N): ");
	scanf("%d",&n);
	int arr[n];
	//input
		for(i=0;i<n;i++)
		{
			printf("ENTER %d element of ARRAY : ",i+1);
			scanf("%d",&arr[i]);
		}
	//CAL
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(max<arr[i]&&arr[i]%2==0)
			max=arr[i];	
	}
	//OUTPUT
	if(max%2!=0)
		printf("no EvEN element");
	else
		printf("LARGEST EvEN ELEMENT: %d",max);	

	return 0;
	}
