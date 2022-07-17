// Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf(" enter a number ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)

    sum=sum+i*i;

    printf("%d",sum);
}

