
/*2. Given a sorted array(ascending order), having n
elements, find the pair of elements in the array such
that its sum is equal to X.*/

#include<stdio.h>
#include<stdlib.h>
void sum(int arr1[],int n){
 int input,i,j;
 printf("Enter sum:");
 scanf("%d",&input);
 for (i = 0; i < (n - 1); i++) {
        for (j = (i + 1); j < n; j++) {
            if (arr1[i] + arr1[j] == input) {
                printf("Pair with a given sum %d is (%d, %d)\n", input, arr1[i], arr1[j]);

 }
}
}
}
  
	

int main(){
 int n,i;
 int *arr;
 printf("Enter number of terms: ");
 scanf("%d",&n);
 arr=(int*)malloc(sizeof(int));
 for(i=0;i<n;i++){
  printf("\nEnter element: ");
  scanf("%d",&arr);
 }
 sum(arr,n);
}