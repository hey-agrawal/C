#include<iostream>
using namespace std;
class def;
class abc{
    public:
    int i;
    void get(){cin>>i;}
    public:
    friend void xyz(abc , def);
};
class def{
    public:
    int j;
    void get(){cin>>j;}
    public:
    friend void xyz(abc , def );
};
void xyz(abc k,def l){
    cout<<k.i<<endl;
      cout<<l.j<<endl;
}


int main(){
    abc a1;
    def d1;
    a1.get();
    d1.get();
    xyz (a1,d1);
    return 0;
}