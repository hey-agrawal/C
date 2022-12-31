#include <iostream>
using namespace std;
 
#define MAX 10
 
class student
{
    private:
        char name[30];
        int rollNo;
        int total;
        float perc;
    public:
       
        void getDetails(void);
       
        void putDetails(void);
};
 

void student::getDetails(void){
    cout << "Enter name: " ;
    cin>> roll no;
    cout<<"entre the marks out of 500";
    cin>>total;
    perc==