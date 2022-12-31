/*
AUTHORE NAME-PRASOON AGRAWAL*/
#include<stdio.h>
int main()
{
    int a[10],j;
    printf("entre 10 numbers;\n");
    for(j=0;j<10;j++)
    {
        scanf("%d",& a[j]);
    }
    printf("\n you entered:\n");
    for(j=0;j<10;j++)
    {
        printf("%d",a[j]);
        }
        return 0;
}