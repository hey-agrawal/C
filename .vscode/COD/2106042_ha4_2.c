// Author - PRASOON
#include<stdio.h>
int main()
{
    int n, i, c;
    printf("Enter the number ");
    scanf("%d", &n);
    printf("The prime factors of %d are\n", n);
    while(n!=1)
    {
        for(i=2;i<=n;i++)
        {
        if(n%i==0)
        {
            c=i;
            break;
        }
        }
        printf("%d\n", c);
        n=n/c; 
    }
}