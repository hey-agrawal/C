#include<stdio.h>
int main()
{
int row,coloum,a[10][10],b[10][10],sum[10][10],i,j;
printf("entre the number of row ");
scanf("%d",&row);
printf("entre the total number of coloum ");
scanf("%d",&coloum);
printf("entree the first matrix:");
for(i=0;i<row;i++)
{
for(j=0;j<coloum;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("entre second matrix:\n");
for(i=0;i<row;i++)
{
for(j=0;j<coloum;j++)
{
scanf("%d",&b[i][j]);
}}
for(i=0;i<row;i++){
for(j=0;j<coloum;j++){

sum[i][j]=a[i][j]+b[i][j];
}
}
printf("sum of matrix:  \n");
for(i=0;i<row;i++)
{
for(j=0;j<coloum;j++)
{
    printf("%d\t",sum[i][j]);
}
printf("\n");
}
return 0;
}