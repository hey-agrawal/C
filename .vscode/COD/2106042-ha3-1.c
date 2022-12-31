// Author - prasoon agrawal
// Program - WAP to check if character entered is a digit, letter , special character etc.
#include<stdio.h>
int main(){
   char ch;
   printf("Enter character : ");
   scanf("%c", &ch);
   if(ch >= 'A' && ch <= 'Z'){
      printf("The character '%c' entered is a Capital letter ", ch);
   }
   else if(ch >= 'a' && ch <= 'z')
    {
        printf("The character '%c' entered is a Small letter ", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else 
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}