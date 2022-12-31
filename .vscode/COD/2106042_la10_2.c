/*Author : Prasoon Agrawal
Program : WAP to add two distances (in km-meter) using structures.*/

#include <stdio.h>
struct Distance 
{
   int km;
   float meter;
} d1, d2, result;

int main() 
{
   printf("Enter 1st distance : \n");
   printf("Enter km: ");
   scanf("%d", &d1.km);
   printf("Enter meter: ");
   scanf("%f", &d1.meter);
 

   printf("\nEnter 2nd distance : \n");
   printf("Enter km: ");
   scanf("%d", &d2.km);
   printf("Enter meter: ");
   scanf("%f", &d2.meter);

   result.km = d1.km + d2.km;
   result.meter = d1.meter + d2.meter;


   while (result.meter >= 1000.0) 
   {
      result.meter = result.meter - 1000.0;
      result.km++;
   }
   printf("\nSum of distances = %dkm-%.1fm", result.km, result.meter);
   return 0;
}