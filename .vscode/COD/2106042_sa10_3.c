/*Author : Prasoon Agrawal
Program : WAP to add two distances (in inch-feet) using structures.*/

#include <stdio.h>
struct Distance 
{
   int feet;
   float inch;
} d1, d2, d;

int main() 
{
   
   printf("Enter 1st distance\n");
   printf("Enter feet : ");
   scanf("%d", &d1.feet);
   printf("Enter inch: ");
   scanf("%f", &d1.inch);
 
   printf("\nEnter 2nd distance\n");
   printf("Enter feet : ");
   scanf("%d", &d2.feet);
   printf("Enter inch  : ");
   scanf("%f", &d2.inch);
   
   d.feet = d1.feet + d2.feet;
   d.inch = d1.inch + d2.inch;

   while (d.inch >= 12.0)
   {
      d.inch = d.inch - 12.0;
      ++d.feet;
   }
   printf("\nSum of distances = %d\'-%.1f\"", d.feet, d.inch);
   return 0;
}
