#include<iostream>
using namespace std;

class student
{
int roll;
float mark;
    public:
void operator+ (int k)
{
mark = mark + k;
    }
    student()
    {
        cout<<"Enter Roll and Marks"<<endl;
        cin>>roll>>mark;
    }
    void show()
    {
        cout<<"Roll = "<<roll<<endl;        
        cout<<"Marks = "<<mark<<endl;
       
    }
};

main()
{
student s1 , s2;
    s1+5;
    s2+15;
    s1.show();
    s2.show();  
}