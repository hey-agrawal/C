/*Author: Prasoon Agrawal
Program: Develop a user defined function and test them in the main program 
for the following standard function:
int MatchAny(char s1[], char s2[]) :It takes two string arguments and it returns
1 if s2 is substring of s1, returns 0 if both s1 and s2 are equal strings, 
otherwise, returns -1. Do not use the standard library functions.*/

#include <stdio.h>
#include <string.h>
int MatchAny(char s1[], char s2[])
{
	int flag = -1, i,j = 0;
	for(i = 0; i < 50; i++)
	{
		if(s1[i] == s2[j])
		{
			while(s2[j] == s1[i])
			{
				j++; i++;
			}
		}
		else
		j=0;
	}
	return flag;
}
int main(){
	char s1[50], s2[50];
	printf("Enter the two strings...\n");
	fgets(s1,50,stdin);
	fgets(s2,50,stdin);
	int val = MatchAny(s1,s2);
	printf("%d",val);
	return(0);
}