/*Author : prasoon agrawal
Program : WAP to store n student’s information (i.e. student’s roll no, name, gender, marks in 5 subjects
etc) of an educational institute and display all the data with total marks of each student, using
array of structure. If full mark of each subject is considered as 100 and pass mark as 40, then
display the list of students failed in a particular subject.*/

#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student s;
    
 printf("Enter The Information of Students : \n ");
    
 printf("Enter Name : ");
    scanf("%s",s.name);
    
 printf("Enter Roll No. : ");
    scanf("%d",&s.roll);
    
    printf("Enter marks : ");
    scanf("%f",&s.marks);
    
    printf("\nDisplaying Information\n");
    
 printf("Name: %s\n",s.name);
    printf("Roll: %d\n",s.roll);
    printf("Marks: %.2f\n",s.marks);
    return 0;
}