/*Author : Prasoon Agrawal
Program : WAP to extract individual bytes from an unsigned int using union.*/

#include<stdio.h>
union tagname
{
	unsigned int a;
	unsigned char s[4];
};
union tagname object;

int main()
{
	char i;
	object.a = 0xAABBCCDD;

	printf("Integer number: %ld, Hex: %X\n",object.a,object.a);

	printf("Individual bytes: ");
	for(i = 3; i >= 0; i--)
		printf("%02X ",object.s[i]);

	printf("\n");
	return 0;
}
