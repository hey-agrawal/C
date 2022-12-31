/*fsbbionous series araay*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("entre the number of the array");
    scanf("%d",&n);
    printf("the fibnocaccis series is");
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    printf("the fabicoounisu series is=%d,%d",arr[0],arr[1]);
    for(i=2;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
        printf("%d ",arr[i]);

    }
    return 0;


}