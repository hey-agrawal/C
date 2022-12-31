#include <iostream>
using namespace std;
class student{
    protected:
    char name[50];
    int roll;
    char sec;
};
class marks{
    protected:
    int marks[3];
    int avg;
};
class grade:public student, public marks{
    protected:
    char g;
    public:
    void get()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Roll No.: ";
        cin>>roll;
        cout<<"Enter Section: ";
        cin>>sec; 
        cout<<"Enter Marks of three subjects: ";
        cin>>marks[0]>>marks[1]>>marks[2];        
    }
    void show()
    {
        cout<<endl<<"Name: "<<name<<endl;
        cout<<"Enter Roll No.: "<<roll<<endl;
        cout<<"Enter Section: "<<sec<<endl; 
        cout<<"Enter Marks of three subjects: "<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<endl;
        float f=(marks[0]+marks[1]+marks[2])/3;
        cout<<"Average Marks: "<<f<<endl;
        if(f>=90) g='O';         
        if(f>80 && f<89) g='E';         
        if(f>70 && f<79) g='A';         
        else g='B';
        cout<<"Grade: "<<g<<endl;         
    } 
};
int main()
{
    grade g;
    g.get();
    g.show();
return 0;
}
