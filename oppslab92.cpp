// Use of constructors and destructors in INHERITANCE

#include<iostream>
using namespace std;
class a{
    public:
    a(){
        cout << "Class a constructor" << endl;
    }
    ~a(){
        cout << "Class a destructor" << endl;
    }
};

class b{
    public:
    b(){
        cout << "Class b constructor" << endl;
    }
    ~b(){
        cout << "Class b destructor" << endl;
    }
};

class c{
    public:
    c(){
        cout << "Class c constructor" << endl;
    }
    ~c(){
        cout << "Class c destructor" << endl;
    }
};

class d : virtual public a, public b, virtual public c{
    public:
    d(){
        cout << "Class d constructor" << endl;
    }
    ~d(){
        cout << "Class d destructor" << endl;
    }
};

int main(){
    d a1;
}