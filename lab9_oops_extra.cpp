#include <iostream>
using namespace std;
class student
{
private:
    char name[20];
    int roll, s[3];

public:
    student()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter subject " << i + 1 << " marks: ";
            cin >> s[i];
        }
    }
    void display()
    {
        cout <<"Name: "<< name << endl;
        cout <<"Roll: "<< roll << endl;
        for (int i = 0; i < 3; i++)
        {
            cout <<"subject "<<i+1<<" :"<< s[i] << endl;
        }
    }
};
class grade : public student
{
private:
    char gde, section[4];
    int yoa;

public:
    grade()
    {
        cout << "Enter grade of the student: ";
        cin >> gde;
        cout << "Enter section name: ";
        cin >> section;
        cout << "Enter the year of admission: ";
        cin >> yoa;
    }
    void show()
    {
        display();
        cout <<"Grade: "<< gde << endl;
        cout <<"Section: "<< section << endl;
        cout <<"Year of admission: "<< yoa << endl;
    }
};
int main()
{
    grade s1;
    s1.show();
    return 0;
}