#include<iostream>
using namespace std;
int main()
{
 int i,sum=0;
 double avg;
 int n;
 cout<<"Enter total number of subjects: ";
 cin>>n;
 char *name= new char[50];
 cout<<"Enter name: ";
 cin>>name;
 int *marks= new int[n];
 cout<<"Enter marks for "<<n<<" subjects: "<<endl;
 for(i=0;i<n;i++)
 {
  cin>>marks[i];
  sum= sum+marks[i];
 }
 avg= sum/n;
 cout<<"Name: "<<name<<endl;
 cout<<"Average: "<<avg<<endl;
}