#include<iostream>
using namespace std;
inline void print(char c='*', int n=80)
{
    for(int i=0;i<=n;i++)
    {
        cout<<c;
    }
}
int main()
{
    print();
    cout<<endl;
    print(90);
    cout<<endl;
    cout<<endl;
    print('#');
     cout<<endl;
      cout<<"case 3"<<endl;
    print('$',250);
}