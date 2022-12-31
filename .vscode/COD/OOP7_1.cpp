#include<iostream>
using namespace std;
class student
{   
    protected:
    char name[50];
    int roll_num;
    char sec[20];
};
class marks:public student
{
    int marks[3];
    int avg;
    public:
    void get()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Roll Number: ";
        cin>>roll_num;
        cout<<"Section:";
        cin>>sec;
        for(int i=0;i<3;i++)
        {
            cout<<"Enter Student Marks: ";
            cin>>marks[i];
        }

    }
    void show()
    {   
        cout<<"\tSTUDENT DETAIL"<<endl;
        cout<<"Name: "<<name<<endl<<"Roll Number: "<<roll_num<<endl<<"Section: "<<sec<<endl;
        avg=(marks[0]+marks[1]+marks[2])/3;
        cout<<"Average is "<<avg<<endl;
    }
};
int main()
{
    marks m1,m2;
    m1.get();
    m2.get();
    m1.show();
    m2.show();

    return 0;
}