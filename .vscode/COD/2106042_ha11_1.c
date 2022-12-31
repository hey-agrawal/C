/*Author : Prasoon 
Program : WAP which produces its own source code as its output.*/

#include <stdio.h>
int main() 
{
    FILE *fp;
    int c;
   
    fp = fopen(__FILE__,"r");
    do {
         c = getc(fp);   
         putchar(c);     
    }
    while(c != EOF);  
    
    fclose(fp);
    return 0;
}