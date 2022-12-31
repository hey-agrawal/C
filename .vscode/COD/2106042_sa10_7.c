/*Author : Prasoon
Program: WAP to declare an union named as ABC having two members a as character and b as integer . Assign ‘A’ to a, 1088 to b respectively through an union variable ob one by one and display these these values immediately. Now assign these values to a, b through ob all together and display these values at last. Find the difference.*/

#include<stdio.h>
union ABC 
{
	char a;
	int b;
};
int main()
{
	union ABC ob;
	printf("When declaring members and printing one at a time: \n");
	ob.a = 'A';
	printf("a = %c\n",ob.a);
	ob.b = 1088;
	printf("b = %d\n",ob.b);
	
	// Simultaneous assingment of unions variables
	printf("When assinging values to union members simultaneously: \n");
	ob.a = 'A';
	ob.b = 1088;
	printf("a = %c\n",ob.a);
	printf("b = %d\n",ob.b);
	return 0;
}