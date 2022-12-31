//Question2: WAP to create a class employee

#include<iostream>
using namespace std;

class employee{
 public:
  int ID, dept_ID;
  char *name= new char[20];
  employee(){
  }
  employee(int id, int dept_id, char* ename){
   ID=id;
   dept_ID=dept_id;
   name=ename;
   cout<<"Employee details:"<<endl;
   cout<<"Employee ID: "<<id<<endl;
   cout<<"Employee Name: "<<ename<<endl;
   cout<<"Department ID: "<<dept_id<<endl;
  }
  employee(employee &k){
   ID=k.ID;
   dept_ID=k.dept_ID;
   name=k.name;
   
  }
  friend void display(employee);
};

void display(employee e){
 cout<<"Employee details:"<<endl;
 cout<<"Employee ID: "<<e.ID<<endl;
 cout<<"Employee Name: "<<e.name<<endl;
 cout<<"Department ID: "<<e.dept_ID<<endl;
}
int main(){
 employee e1;
 int id, dept;
 char *name=new char[20];
 cout<<"Enter Employee Name:"<<endl;
 cin>>name;
 cout<<"Enter Employee ID:"<<endl;
 cin>>id;
 cout<<"Enter Department ID:"<<endl;
 cin>>dept;
 e1=employee(id,dept,name);
 employee e2=e1;
 display(e2);
 return 0;
}
