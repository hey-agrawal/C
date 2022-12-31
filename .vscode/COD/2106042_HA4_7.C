// Author - PRASOON
#include<stdio.h>
int main(){
    long n,d,c = 0;
    long i = 1;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    while(n != 0){
        d = n % 2;
        n = n / 2;
        c += d * i; 
        i = i * 10;
    }
    printf("The corresponding binary number is %d",c);

return 0;
}