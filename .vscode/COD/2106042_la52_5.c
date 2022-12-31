/*Author : Prasoon
Program : WAP to print odd and even numbers in a array. */
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
            printf("even\n");
            for(i=0;i<n;i++)
            {
               if(arr[i]%2==0)
                   printf("%d\t",arr[i]);
            }
               printf("\nodd\n");

            for(i=0;i<n;i++)
            {
               if(arr[i]%2!=0)
                   printf("%d\t",arr[i]);   
            }

return 0;
}
