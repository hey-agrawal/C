// Author - prasoon

#include<stdio.h>
int main(){
    int num1;
    printf("Enter the number to check for even-odd \n");
    scanf("%d", &num1);
    int a = num1 % 2;
    switch(a == 0){
        case 1 : printf("%d is an even number", num1);
        break;
        case 0 : printf("%d is an odd number", num1);
        break;
    }
}