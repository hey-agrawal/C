/*LA7.1 WAP to swap the values of two variables by using a suitable user defined function (say SWAP) for it.
AUTHOR-Prasoon Agrawal*/

#include<stdio.h>  
  
void swap(int, int);  
  
int main()  
{  
    int a, b;  
  
    printf("Enter values for a and b\n");  
    scanf("%d%d", &a, &b);  
  
    printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);  
  
    swap(a, b);  
  
    return 0;  
}  
  
void swap(int x, int y)  
{  
    int temp;  
  
    temp = x;  
    x    = y;  
    y    = temp;  
  
    printf("\nAfter swapping: a = %d and b = %d\n", x, y);  
return 0;
}  
