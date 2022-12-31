
#include <iostream>
using namespace std;
class employee{
    protected:
    char name[50];
    int age;
    char ID[10];
};
class department: employee{
    char deptname[50];
    char deptID[10];
    public:
    void get()
    {
        cout<<"Enter Employee Name: ";
        cin>>name;
        cout<<"Enter Employee Age: ";
        cin>>age;        
        cout<<"Enter Employee ID: ";
        cin>>ID;   
        cout<<"Enter Department Name: ";
        cin>>deptname;
        cout<<"Enter Department ID: ";
        cin>>deptID;
    }
    void show()
    {   
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Enter Employee Age: "<<age<<endl;        
        cout<<"Enter Employee ID: "<<ID<<endl; 
        cout<<"Department Name: "<<deptname<<endl;
        cout<<"Department ID: "<<deptID<<endl;
    }
};
class grade: public department{
    char g;
    int bsal;
    public:
    void receive()
    {
        get();
        cout<<"Enter Grade: ";
        cin>>g;
        cout<<"Enter Base Salary: ";
        cin>>bsal;     
    }
    void display()
    {
        show();
        cout<<"Grade: "<<g<<endl;
        cout<<"Base Salary: "<<bsal<<endl;
    }
};
int main()
{
    grade g;
    g.receive();
    cout<<endl<<"The details of the entered employee are: "<<endl;
    g.display();
    return 0;
}