// Author - Prasoon
#include<stdio.h>
int main(){
    int n,i = 1,j,p = 1,q;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(i <= n){
        j = 1;
        while(j <= i - 1){
            printf(" ");
            j++;
        }
        p = 1;
        while(p <= n - i + 1){
            printf("%d",p);
            p++;
        }
        for(q = n - i; q >= 1; q--){
          printf("%d",q);     
        }
        printf("\n");
        i++;
    }
    return 0;
}