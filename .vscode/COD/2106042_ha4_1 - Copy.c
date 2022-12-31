// Author - PRASOON
#include<stdio.h>
int main(){
    int n,i,sum = 0;
    printf("Enter the number\n");
    scanf("%d",&n);
    int temp = n;
    while(n){
    int fact = 1;
    i = 1;
    int d = n % 10;
    for(i = 1; i <= d; i++){
        fact = fact * i;
    }
    sum += fact;
    n = n / 10;
    }
    if(sum == temp){
        printf("%d is a Strong number",temp);
    }
    else{
        printf("%d is not a Strong number", temp);
    }
    return 0;
}