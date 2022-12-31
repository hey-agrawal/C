/*Author: Prasoon
program: WAP to arrange the numbers stored in the array so that it will display
 first all odd numbers,then even numbers. */
#include<stdio.h>
int main()
	{
	int n,i,e,o=0;
	printf("Enter the size of array(N): ");
	scanf("%d",&n);
	e=n-1;
	int arr[n];
	int oarr[n];
	//INPUT and cacl
		for(i=0;i<n;i++)
		{
			printf("ENTER %d element of ARRAY : ",i+1);
			scanf("%d",&arr[i]);
			if(arr[i]%2==0)
			{
			oarr[e]=arr[i];
			e-=1;
			}
			else
			{
			oarr[o]=arr[i];
			o+=1;
			}
		}
	//output
	for(i=0;i<n;i++)
		printf("%d\t ",oarr[i]);
	return 0;
	}
