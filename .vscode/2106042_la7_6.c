#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf ("entre a string");
    gets (str);
    int i,v=0,c=0;
    for(i=0;i<=strlen(str)-1;i++)
    {
        int x=str[i];
        if((x>=65 && x<=90) || (x>97 && x<=122))
        {
             if (str[i]=='a' ||  str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' ||  str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
         v++;
        else 
        c++;
             }
    }
    printf(" number of vowels:%d",v);
    printf("the number of consonants%d",c);
    return 0;



}