#include<iostream>
#include<math.h>
using namespace std;

void amount(float principal, int years, float rate)
{
    cout << "Principal Amount : " << principal << endl;
    cout << "Time : " << years << endl;
    cout << "Rate : " << rate << endl;
    cout << "Simple Interest : " << (principal * years * rate)/100 << endl;
}

void amount(float principal, int time, float rate, int nCI)
{
    int CompoundIN;
    cout << "Principal Amount : " << principal<<endl;
    cout << "Time : " << time << endl;
    cout << "Rate : " << rate << endl;
    //a = p * pow((1 + r / n), n * t);
    CompoundIN = principal * pow((1+rate/100), nCI*time);
    cout << "Compound Interest : " << CompoundIN << endl;
}

int main()
{
    float simple_prin, compound_prin, simple_rate, compound_rate;
    int simple_year, compound_year, nCI;
    cout << "For Simple Interest" << endl;
    cout << "Enter principal amount: " << endl;
    cin >> simple_prin;
    cout << "Enter duration: " << endl;
    cin >> simple_year;
    cout << "Enter rate of interest: "<<endl;
    cin >> simple_rate;
    amount(simple_prin, simple_year, simple_rate);
    cout << "For Compound Interest" << endl;
    cout << "Enter principal amount: " << endl;
    cin >> compound_prin;
    cout << "Enter duration: " << endl;
    cin >> compound_year;
    cout << "Enter rate of interest: "<<endl;
    cin >> compound_rate;
    cout << "Enter number of times the interest is compounded per year "<<endl;
    cin >> nCI;
    amount(compound_prin, compound_year, compound_rate, nCI);

    return 0;
}
