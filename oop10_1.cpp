#include<iostream>
using namespace std;

class student{
    int roll;
    float avg;
    public:
    student(){
        cout << "Enter the roll number : ";
        cin >> roll;

        cout << "Enter the average value : ";
        cin >> avg;
    }
    void operator+ (int k){
        avg = avg + k;
    }

    void operator>= (student& s2){
        if(this->avg > s2.avg){
            cout << "Average of student 1 is greater than student 2"<< endl;
        } 
        else if(this->avg < s2.avg){
            cout << "Average of student 2 is greater than student 1"<< endl;
        }
        else{
            cout << "Both the students have equal average marks" << endl;
        }
    }
    void display(){
        cout << "Roll : " << roll << endl;
        cout << "Average : " << avg << endl;
    }

    student(student& s1){
        cout << "Copy Constructor invoked" << endl;
        roll = s1.roll;
        avg = s1.avg;
    }
};

int main(){
    student s1;
    student s2;

    int k;
    s1.display();
    cout << endl;
    cout << "Enter the value to be added to avg : \n";
    cin >> k;

    s1 + k;
    s1.display();
    cout << endl;

    int l;
    s2.display();
    cout << endl;
    cout << "Enter the value to be added to avg : \n";
    cin >> l;

    s2 + l;
    s2.display();
    cout << endl;

    s1 >= s2;
    s2 >= s1;
}