#include<iostream>
using namespace std;
class base{
    int y;
    public:
        base()
        {
            cout << "Base class zero agrument" << endl;
        }
        base(int k)
        {
            cout << "Base class parameterized" << endl;
        }
        ~base(){
            cout << "Base class destructor" << endl;
        }
};

class derived : public base{
    public:
        derived()
        {
            cout << "Derived class zero argument" << endl;
        }
        derived(int k)
        {
            cout << "Derived class parameterized" << endl;
        }
        ~derived(){
            cout << "Derived class destructor" << endl;
        }
};

int main(){
    derived d1;
    derived d2(10);
}