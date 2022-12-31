/*Author: Prasoon
Program: WAP to print binary equivalent of a given decimal number using arrays.*/
#include<stdio.h>
#define MAX 1000 

int main()
{

    int n,i=0,arr[MAX],j;
    printf("enter value of n in decimal");
    scanf("%d",&n);

    while(n!=0)
    {
        arr[i]=n%2;
        n/=2;
        i++;

    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }


return 0;
}
