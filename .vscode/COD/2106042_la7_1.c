/*LA7.1 WAP to extract the last character of each word of a given string.
AUTHOR-Prason Agrawal*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
   int len;
 
   printf("\nEnter the String : ");
   gets(str);
 
   len = strlen(str);
   printf("The Last character of the string is %c",str[len-1]);
	return 0;
}
