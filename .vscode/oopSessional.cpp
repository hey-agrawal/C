#include <iostream>
#include<cstring>
using namespace std;
template <class T1,class T2>
class book
{
    protected:
        T1 ARname, Bname;
        T2 yearpub,pages;
    public:
        book(T1 ar, T1 bn, T2 yb,T2 pg)
        {
            ARname=ar;
            Bname=bn;
            yearpub=yb;
            pages=pg;
        }
        int check (char *p)
        {
            book b[2];
            char name[100];
            strcpy(name,p);
            for(int i=0;i<5;i++)
            {
                if(strcpy(name,b[i.Bname])==0)
                {
                    i=1;
                    j=i;
                    break;
                }
            }
        }
        void details(int j)
        {
            book[2];
            cout<<"book name:"<<b[i].Bname<<endl;
            cout<<"aurthor name:"<<b[i].ARname<<endl;
            cout<<"year of publication"<<b[i].yearpub<<endl;
            cout<<"pages:"<<b[i].pages<<endl;
        }
        };
         
         int main()
         {
            book<char*,int>b[2];
            b[0]=("RAVAN","TEMPEST",2022,100);
            b[0]=("BALGURU","CPP PRO",2022,100);

            char name[100];
            cout<<"enter book name to be searched:";
            cin>>name;
            int t;
            t=b[2].check(name);
            if(t==0)
            cout<<"book not available";
            else
            {
                cout<"book available">;
                b[t].details(t);
            }
            fstream inoutfile;
            inoutfile.open("book.txt", ios::in | ios::out | ios::ate | ios::binary);
            inoutfile.seekg(0, ios::beg);
            for (int i = 0; i < 2; i++)
            {
                inoutfile.write((char *)b[i], sizeof(b[i]));
            }
            for (int j = 0; j < 2; j++)
                {
                    inoutfile.read((char *)&b[j], sizeof(b[j]));
                    b[j].details(j);
                }
}