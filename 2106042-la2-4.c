/* AUTHORE NAME-PRASOON AGRAWAL*/
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,sp,area;
    printf("\nentre the sides of triangle");
    scanf("%f%f%f",&a,&b,&c);
    sp=(a+b+c)/2;
    area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("area of triangle=%f\n",area);
    return 0;

}