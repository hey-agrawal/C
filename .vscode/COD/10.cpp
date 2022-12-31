#include<iostream>
#include<iomanip>
using namespace std;
void swap_func(int &a,int &b)
{
    cout<<"before swapping"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping"<<endl<<"a="<<a<<endl<<"b="<<b<<endl<<endl;

    }
    int main()
    {
        int x,y;
        cout<<"entre the two digit value:"<<endl;
        cin >> x ;
        cin >> y ;
        swap_func(x,y);
        
    }