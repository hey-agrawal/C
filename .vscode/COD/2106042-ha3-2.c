2.// Author - PRASOON
// WAP to input 2 integer operands and one operator from user, performs operation
// and prints the output.

#include<stdio.h>
int main(){
    int a, b;
    int operator;           // 1 -'+', 2 -'-', 3 - '*', 4 - '/', 5 - '%'

    printf("Enter 2 integer variables : ");
    scanf("%d %d", &a,&b);
    printf("Enter value (1-5) where 1 = '+', 2 = '-', 3 = '*', 4 = '/', 5 = modulus \n");
    scanf("%d", &operator);
    switch (operator){
        case 1 : printf("The sum is : %d ", a+b);
                 break;
        case 2 : printf("The difference is : %d ", a-b);
                 break;
        case 3 : printf("The multiplication is : %d ", a*b);
                 break;
        case 4 : printf("The division is : %d ", a/b);
                 break;
        case 5 : printf("The modulus is : %d ", a%b);
                 break;
        default : printf("Please enter a valid operator!");
    }
    return 0;
}