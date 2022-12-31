/* Author :  Prasoon Agrawal
Program : WAP to sort 3 elements stored in an array without using any sorting algorithm. */

#include<stdio.h>

int main(){
	int arr[3] = {88,45,53};
	
	int sort[3];
	int min1 = arr[0];
	
	for(int i=1; i<3; i++){
		if(arr[i]<min1){
			min1 = arr[i];
		}
	}
	
	sort[0] = min1;
	
	int min2 = arr[0];
	
	for(int i=1; i<3; i++){
		if(arr[i]<min2 && arr[i]>min1){
			min2 = arr[i];
		}
	}
	
	sort[1] = min2;
	
	int min3 = arr[0];
	
	for(int i=1; i<3; i++){
		if(arr[i]>min3 && arr[i]>min2){
			min3 = arr[i];
		}
	}
	sort[2] = min3;
	
	printf("The new sorted array is: \n");
	for(int k=0; k<3; k++){
		printf("%d ", sort[k]);
	}
	return 0;
}