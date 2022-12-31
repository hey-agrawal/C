/*
AUTHORE NAME-PRASOON AGRAWAL*/
#include<stdio.h>
int main()
{ 
    int n;
    
    printf("read and print the element:\n");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        printf("entre element%d:",i+1);
        scanf("%d",&array[i]);
    }
    for(int i=1;i<n;i++)
    {
        if(array[0]<array[i])
        {
            array[0]=array[i];
        }
    }
    printf("largest number=%d",array[0]);

    return 0;
}