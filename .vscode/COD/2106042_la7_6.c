/*LA7.6 WAP to replace all occurrences of a character in a string with the previous 3rd character if any of the character.
AUTHOR-Prasoon Agrawal*/

#include <stdio.h>
int main()
{
   char string[100], ch1, ch2;
   int i;
   printf("enter a string : ");
   gets(string);
   printf("enter a character to search : ");
   scanf("%c", &ch1);
   getchar();
   printf("enter a char to replace in place of old : ");
   scanf("%c", &ch2);
   for(i = 0; i <= strlen(string); i++){
      if(string[i] == ch1){
         string[i] = ch2;
      }
   }
   printf("\n the string after replace of '%c' with '%c' = %s ", ch1, ch2, string);
   return 0;
}
