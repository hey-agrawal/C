#include<stdio.h>
int main(){
    float marks;
    printf("Enter the marks secured by the student : \n");
    scanf("%f", &marks);
    if(marks <= 100 && marks >= 90){
        printf("The grade secured by you is : O");
    }
    else if(marks <= 89 && marks >= 80){
        printf("The grade secured by you is : E");
    }
    else if(marks <= 79 && marks >= 70){
        printf("The grade secured by you is : A");
    }
    else if(marks <= 69 && marks >= 60){
        printf("The grade secured by you is : B");
    }
    else if(marks <= 59 && marks >= 50){
        printf("The grade secured by you is : C");
    }
    else if(marks <= 49 && marks >= 40){
        printf("The grade secured by you is : D");
    }
    else{
        printf("The grade secured by you is : F - FAIL");
    }
return 0;
}
