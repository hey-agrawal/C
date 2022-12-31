
#include<iostream>
using namespace std;

class Student{

    int roll;
    static int id;

    public :

    void get(){
        cout << "Enter Roll Number : " << endl;
        cin >> roll;
    }
    void show(){
        cout << "Roll : " << roll << endl;
    }
    static void display(){                      // static member function
        cout << "Id : " << id << endl;
    }
};

int Student :: id = 10;
int main(){
    Student s1;
    s1.get();
    s1.show();
    Student :: display();                      // calling static member function
    return 0;
}21