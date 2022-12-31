
/*9. WAP to convert Binary to Octal number system.
AUTHOR-PRASOON AGRAWAL*/

#include <stdio.h>
int main()
{
long int binarynum, octalnum = 0, j = 1, remainder;

printf("Enter the value fobinary number: ");
scanf("%ld", &binarynum);
while (binarynum != 0)
{
remainder = binarynum % 10;
octalnum = octalnum + remainder * j;
j = j * 2;
binarynum = binarynum / 10;
 }
 printf("Equivalent octal value: %lo", octalnum);
return 0;
}