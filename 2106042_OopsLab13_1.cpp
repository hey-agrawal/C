#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char Name[30], ch;
    cout<<"Enter the Name: ";
    cin.getline(Name, 30);
    fstream file("file.txt");
    file.seekp(0,ios::beg);
    file.write(Name, 30);
    cout<<Name<<endl;
    file.close();
    return 0;
}