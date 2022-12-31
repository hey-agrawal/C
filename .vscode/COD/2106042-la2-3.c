/*Author - Shayan Mandal
Date - 08/03/2022
WAP to calculate perimeter of a circle.*/
#include<stdio.h>
int main()
{
	float r, p;
	printf("Enter the radius of the circle\n");
	scanf("%f", &r);
	printf("The radius of the circle %f\n",r);
	p= 2*3.14*r;
	printf("The perimeter of the circle is %f",p);
}
