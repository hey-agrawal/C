#include<stdio.h>
int main()
{
    char c;
    printf("entre the character\n");
    scanf("%c",&c);
    if(c>='A'&& c<='Z')
    {
        c=c+32;
        printf("the character in lowercaase is %c",c);
    }
    else 
    printf("the character is already in lowercase");
    return 0;
}