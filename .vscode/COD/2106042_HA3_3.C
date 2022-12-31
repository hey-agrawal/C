/*Author: PRASOON

Program: WAP to find the roots of a quadratic equation ax2+bx+c=0 using
 switch-case statement. */
#include<stdio.h> <math.h>
int main()
{
	float a,b,c,r1,r2,i,dis;
	printf("Enter values of a,b,c of quadratic equation (aX^2+bX+c): ");
	scanf("%f%f%f",&a,&b,&c);
	dis=pow(b,2) - (4*a*c);
	switch(dis>0)
	{
		case 1:
			r1= (-b+sqrt(dis))/(2*a);
			r2= (-b-sqrt(dis))/(2*a);
			printf("Two distinct & real roots exists: %.2f & %.2f",r1,r2);
			break;
		
		case 0:
			switch(dis<0)
			{
				case 1:
					r1=r2=-b/(2*a);
					i=sqrt(-dis)/(2*a);
					printf("Two distinct complex roots exists: %.2f + i%.2f & %.2f - i%.2f",r1,i,r2,i);
					break;
				
				case 0:
					r1=r2=-b/(2*a);
					printf("Two equal & real root exists: %.2f & %.2f",r1,r2);
					break;
		    }
	}
	return 0;
}
