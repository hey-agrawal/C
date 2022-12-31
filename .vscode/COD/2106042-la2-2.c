/* AUTHORE NAME-PRASOON AGRAWAL*/
#include <stdio.h>
int main()
{
    float fr,fahr;
    printf("\n enter the temperature (f):");
    scanf("%f", &fr);
    fahr=(fr*1.8)+32;
    printf("temperature in fahrenheit=%f\n",fahr);
    return 0;
}