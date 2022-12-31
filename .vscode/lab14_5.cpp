#include<iostream>
using namespace std;
template <class t=int>
int swapp(t& a,t& b){
    t temp;
    temp=a;
    a=b;
    b=temp;
    return 0;
}
int main()
{
    int n1,n2;
    cout<<"Enter 2 nos : ";
    cin >> n1>>n2;
    cout<<"Before swapping---- \n";
    cout<<"a : "<<n1<<" "<<"b :"<<n2<<endl; 
    swapp(n1,n2);
    cout<<"\nAfter swapping-------\n";
    cout<<"a : "<<n1<<" "<<"b:"<<n2;
    return 0;
    }