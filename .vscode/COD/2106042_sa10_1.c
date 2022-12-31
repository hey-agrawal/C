/*Author : Prasoon Agrawal
Program : WAP to store one student’s information (i.e. student’s roll no, name, gender, marks etc) of an educational institute and display all the data, using structure.*/

#include <stdio.h>
struct student 
{
    char name[50];
    int roll;
    float marks;
} s;

int main() 
{
    printf("\nEnter the information of the candidate......\n");
    printf("\nEnter name : ");
    fgets(s.name, sizeof(s.name), stdin);

printf("Enter roll number : ");
    scanf("%d", &s.roll);
    printf("Enter marks : ");
    scanf("%f", &s.marks);

    printf("\nDisplaying Information :\n");
    printf("Name : ");
    printf("%s", s.name);
    printf("Roll number : %d\n", s.roll);
    printf("Marks : %.1f\n", s.marks);

    return 0;
}


    