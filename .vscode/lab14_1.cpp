#include <iostream>
using namespace std;
void show(int i, int j)
{
    try
    {

        if (j == 0)
            throw 'a';
        else
        {
            float v = 1.0 * i / j;
            cout << v;
        }
    }
    catch (char b)
    {
        cout << "Cant be divided with zero";
    }
}
int main()
{
    int i, j;
    cout << "enter values";
    cin >> i >> j;
    show(i, j);
    return 0;
}