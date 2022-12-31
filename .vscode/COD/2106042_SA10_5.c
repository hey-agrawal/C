/*Author : Sagnik Mukherjee
Program : WAP to store n books data such as title, author, pulication, price etc using structures with
dynamically memory allocation. Display all the books information of a particular author.*/

#include<stdio.h>
#include<string.h>
#define SIZE 20
 
struct book
{
          char name[20];
          char author[20];
          int pages;
          float price;
 
};
 
void output(struct book v[],int n);
 
void main()
{
          struct book b[SIZE];
 
          int num,i;
          printf("Enter the Numbers of Books : ");
          scanf("%d", &num);
          printf("\n");
          for(i = 0; i < num; i++)
 
          {
 
                   printf("\t Details of Book No. %d \n",i+1);
 
                   printf("\nEnter the Book Name : ");
                   scanf("%s",b[i].name);
 
                   printf("\nEnter the Author of Book : ");
                   scanf("%s",b[i].author);
 
                   printf("\nEnter the Pages of Book : ");
                   scanf("%d",&b[i].pages);
 
                   printf("\nEnter the Price of Book : ");
                   scanf("%f",&b[i].price);
 
          }
 
          output(b,num);
 
}
 
void output(struct book v[],int n)
 
{
 
          int i,t=1;
 
          for(i=0;i<n;i++,t++)
 
          {
 
                    printf("\n");
 
                   printf("Book No.%d\n",t);
 
                   printf("\t\tName of Book No. %d is = %s \n",t,v[i].name);
 
                   printf("\t\tAuthor of Book No. %d is = %s \n",t,v[i].author);
 
                   printf("\t\tTotal pages of Book No. %d is = %d \n",t,v[i].pages);
 
                   printf("\t\tPrice of the Book No. %d is = %f \n",t,v[i].price);
 
                   printf("\n");
 
          }
 
}