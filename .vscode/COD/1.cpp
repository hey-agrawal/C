#include<iostream>
using namespace std;

void show(int &j){                                
    j += 10;
}
int main(){
    int i = 10;
    cout << i << endl;
    show(i);
    cout << i << endl;
    return 0;
}c