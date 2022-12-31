#include<iostream>
using namespace std;

float SimpleInterest(float p, float t , float r = 8.5){
    float SI = (float) ((p * t * r) / 100);
    return SI;
}
int main(){
    float p;
    cout << "Enter the principal amount :" << endl;
    cin >> p;

    float t;
    cout << "Enter the period of time :" << endl;
    cin >> t;

    float ans = SimpleInterest(p,t);
    cout << "The calculated Simple Interest is : " << ans << endl;
    return 0;
}