#include<stdio.h>
int main()
{ 
    char ch;
    int i,j,n;
    printf("entre a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
        ch='A';
        for(j=i;j>=1;j--)
        {
            printf("%c",ch+j-1);
        }
        printf("\n");
        }
        return 0;
}