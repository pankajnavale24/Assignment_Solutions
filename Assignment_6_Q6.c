//Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int fact=1,i,n;
    printf(" enter N ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact=fact*i;
    printf("factorial of %d=%d",n,fact);
}



