#include<iostream>
using namespace std;
class student
{
 char name[50];
 int roll;
 int marks;
 public:
  student()
  {
   cout<<"Enter name:";
   cin>>name;
   cout<<"Enter roll number:";
   cin>>roll;
   cout<<"Enter marks:";
   cin>>marks;
  }
 ~student()
  {
   cout<<"Memory deallocated successfully\n";
  }
   
};
int main()
{
 student s1,s2;
 return 0;
}