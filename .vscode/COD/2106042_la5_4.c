#include<stdio.h>
int main()
{
  int i, x, n ,a[100];
  printf("Enter the size of array:");
  scanf("%d", &n);

   printf("Enter array elements:");
   for (i = 0; i < n; i++) 
   {
       scanf("%d", &a[i]);
   }

   i = 0;
   while (i < n - 1) 
   {
       x = a[i];
       a[i] = a[i + 1];
       a[i + 1] = x;
       i = i + 2;
   }

   printf("Array pairs after swapping:");
   for (i = 0; i < n; i++) 
   {
   printf("%d ", a[i]); 
   }
   return 0;
}