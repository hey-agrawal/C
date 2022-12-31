/*Author: prasoon

Program: WAP to print all odd and even numbers separately within a given range.
 The range is input through user. */
#include<stdio.h>
int main()
{
    int n1, n2,i;
    printf("Enter the first number for the range: ");
    scanf("%d",&n1); 
    printf("Enter the second number for the range: ");
    scanf("%d",&n2);
    printf("\nDisplay the even numbers between %d and %d are: ",n1,n2);
    for(i=n1; i<=n2; i++)
	{
        if(i%2==0)
            printf("\n %d",i);
    }
    printf("\n\nDisplay the odd numbers between %d and %d are: ",n1,n2);
    for(i=n1; i<=n2; i++)
	{
        if(i%2==1)
            printf("\n %d",i);
    }
    return 0;
}

