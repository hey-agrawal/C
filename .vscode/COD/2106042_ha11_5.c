/*Author Prasoon
Program :WAP to merge lines alternatively from two files & print the result.*/

#include<stdio.h>
int main()
{
    char file1[10], file2[10];
 
    puts("enter the name of file 1");      
    scanf("%s", file1);
    puts("enter the name of file 2");
    scanf("%s", file2);
    FILE *fptr1, *fptr2, *fptr3;
    fptr1=fopen(file1, "r");             
    fptr2=fopen(file2, "r");
    fptr3=fopen("merge2.txt", "w+");   
    char str1[200];
    char ch1, ch2;
    int n = 0, w = 0;
    while (((ch1=fgetc(fptr1)) != EOF) && ((ch2 = fgetc(fptr2)) != EOF))
    {
        if (ch1 != EOF)             
        {
            ungetc(ch1, fptr1);
            fgets(str1, 199, fptr1);
            fputs(str1, fptr3);
            if (str1[0] != 'n')
                n++;     
        }
        if (ch2 != EOF)
        {
            ungetc(ch2, fptr2);
            fgets(str1, 199, fptr2);
            fputs(str1, fptr3);
            if (str1[0] != 'n')
                n++;        
        }
    }
    rewind(fptr3);
    while ((ch1 = fgetc(fptr3)) != EOF)       
    {
        ungetc(ch1, fptr3);
        fscanf(fptr3, "%s", str1);
        if (str1[0] != ' ' || str1[0] != 'n')
            w++;
    }
    fprintf(fptr3, "\n\n number of lines = %d n number of words is = %d\n", n, w - 1);

    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
}