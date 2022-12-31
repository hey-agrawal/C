/*Author : Prasoon
Program : WAP to read roll number, name, gender and marks data of n number of students from user
and store them in a file. If the file previously exits, add the information of n students.*/

#include <stdio.h>
#include <stdlib.h>
int main() 
{
	char name[50];
	int marks,i,n;
	printf("Enter number of students : ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("student.txt","w"));
	if(fptr==NULL) 
    {
		printf("Error!");
		exit(1);
	}
	for (i = 0; i < n; ++i) 
    {
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
	}
	fclose(fptr);
	return 0;
}
