#include<iostream>
using namespace std;
int main()
{
    int *arr;
    int size;
    cout<<"enttre the size of array";
    cin>>size;
    cout<<"creating the araay of size"<<size<<"...";
    arr= new int[size];
    cout<<"\ndyanmic alloction of memory for arr is successful";
    delete arr;
    return 0;
}