/* AUTHORE NAME-PRASOON AGRAWAL*/
#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,mt,ma,mp;
    printf("entre the marks of all 5 subject");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    mt=s1+s2+s3+s4+s5;
    ma=mt/5;
    mp=mt/500*100;
    printf("the average marks is %.2f and the percentage obtained %.2f",ma,mp);
    return 0;
}