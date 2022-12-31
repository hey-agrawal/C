#include<iostream>
using namespace std;
class student
{
    string i;
    int j, k;
    public:
    void get()
    {
        cout<<"Enter name: ";
        cin>>i;
        cout<<"Enter roll: ";
        cin>>j;
        cout<<"Enter sub marks: ";
        cin>>k;
    }
    void show()
    {
        cout<<i<<endl;
        cout<<j<<endl;
        cout<<k<<endl;
    }
    friend void xyz(student);
};
 void xyz(student l)
{
 cout<<l.i<<endl;
    cout<<l.j<<endl;
    cout<<l.k<<endl;
}
int main()
{
    int i;
    student s[2];
    for(i=0;i<2;i++)
    {
        cout<<"Student "<<i+1<<" detail: "<<endl;
        s[i].get();
        xyz(s[i]);
    }
}