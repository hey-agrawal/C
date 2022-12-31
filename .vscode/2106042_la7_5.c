#include<stdio.h>
#include<string.h>
int main()
{
    char str[1100];
    printf("entre a string");
    gets (str);
    char x=str[0];
    printf("%c",x);
    int i;
    for (i=0;i<strlen(str)-1;i++)
    {
        if(str[i]==' ')
        {
            printf("%c",str[i+1]);
        }
    }
    return 0;

}