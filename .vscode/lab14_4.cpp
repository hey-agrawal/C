#include <iostream>
using namespace std;
template <class t1, class t2>
class student
{
    t1 name;
    t1 department;
    t2 roll;
    t2 avg_marks;

public:
    student(t1 a, t1 b, t2 c, t2 d)
    {
        name = a;
        department = b;
        roll = c;
        avg_marks = d;
        cout << "Parameterized constructor\n";
    }
    student() {}
    void insert()
    {
        cout << "\nEnter student name and department :\n";
        cin >> name >> department;
        cout << "\nEnter roll and avgerage marks: ";
        cin >> roll >> avg_marks;
    }
    void display()
    {
        cout << name << " " << department << " " << roll << " " << avg_marks << endl;
    }
};
main()
{
    class student<string, int> s1, s2;
    s1.insert();
    s2.insert();
    cout << "\n";
    cout << "\n------------Entered details are------------\n";
    s1.display();
    s2.display();
    return 0;
}