/*Author : Prasoon Agrawal
Program : WAP to declare a union ABC having 3 members a,b,c of type char, int and double respectively.Assign user entered values to these members respectively one by one and display these values immediately. Again assign these user entered values to a, b, c one by one all together and display these values at last. Find the difference.*/

#include<stdio.h>
union ABC 
{
	char a;
	int b;
	double c;
};
int main()
{
	union ABC value;
	printf("Enter value for a : ");
	scanf("%c",&value.a);
	printf("a is %c\n",value.a);
	printf("Enter value for b : ");
	scanf("%d",&value.b);
	printf("b is %d\n",value.b);
	printf("Enter value for c : ");
	scanf("%ld",&value.c);
	printf("c is %ld\n",value.c);
	printf("\nNow, taking values at once and then printing all three members together\n");
	printf("\nEnter value for a : ");
	scanf("\n%c",&value.a);
	printf("Enter value for b : ");
	scanf("%d",&value.b);
	printf("Enter value for c : ");
	scanf("%ld",&value.c);
	printf("\na is %c, b is %d and c is %ld",value.a,value.b,value.c);
	return 0;
}