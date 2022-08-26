//1. Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
int i,j;
int a[3][3],b[3][3];
printf("enter elements for 1 matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
printf("\n");
}
printf("enter elements for 2 matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&b[i][j]);
printf("\n");
}
printf("the sum of matrix 1 and 2\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\n",(a[i][j]+b[i][j]));
}printf("\n");
}
}
