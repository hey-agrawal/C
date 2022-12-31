/*WAP to input an array dynamically:
I) Find the smallest number in the array
II) Find the second smallest number in the array*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i;
printf ("Enter number of elements:\n");
scanf ("%d",&n);
int *p=(int*)malloc(n*sizeof(int));
for (i=0;i<n;i++)
{
printf ("Enter element:");
scanf ("%d",&p[i]);
printf ("\n");
}
int min=p[0];
for (i=0;i<n;i++)
{
if (min>p[i])
{
min=p[i];
break;
}
}
int secondmin=p[2];
for (i=0;i<n;i++)
{
if (p[i]!=min && p[i]<secondmin)
secondmin=p[i];
}
printf ("The smallest element is %d\n",min);
printf ("The second smallest element is %d",secondmin);
return 0;
}
