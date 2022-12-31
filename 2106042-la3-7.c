#include<stdio.h>
int main()
{
    int a,b;
    printf("entre two number\n");
    scanf("%d%d",&a,&b);
    switch(a>b){
        case 1:printf("%d is maximum",a);
        break;
        case 0:
        printf("%d is maximum",b);
        break;

    }
    return 0;
    
}