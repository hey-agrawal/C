#include<stdio.h>

int main(){
    int a[50],size,num,pos;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the elements of array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element you want to insert\n");
    scanf("%d",&num);
    printf("enter postion at which you want to insert\n");
    scanf("%d",&pos);

    for(int i=size-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=num;

    printf("the elements of array are\n");
    for(int i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
}