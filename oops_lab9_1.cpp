#include <iostream>
using namespace std;
class base
{
public:
base()
{
cout<<"base class 0 argument"<<endl;
base (int k);
{
cout<<"base class parametirized"<<endl;
}
}
};
class derived:public base;
{
public:
derived()
{
cout<<"derived class 0 argument constructor"<<endl;
}
derived(intk)
{
cout<<"derived class parametirizedconstructor"<<endl;
}
}
int main()
{
derived.d1()
}