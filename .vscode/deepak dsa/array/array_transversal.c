#include<stdio.h>

int main(){
    int a[50] ,size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the elements of array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("the elements of array are\n");
    for(int i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
}