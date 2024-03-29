/*Author : Prasoon
Program : WAP to add two complex numbers by passing structure to a function.*/

#include <stdio.h>
typedef struct complex 
{
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2);

int main() 
{
    complex n1, n2, res;

    printf("For 1st complex number!! \n");
    printf("Enter the real and imaginary parts : ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number!! \n");
    printf("Enter the real and imaginary parts : ");
    scanf("%f %f", &n2.real, &n2.imag);

    res = add(n1, n2);

    printf("Sum = %.1f + %.1fi", res.real, res.imag);
    return 0;
}

complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}