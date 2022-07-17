// Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n,s;
    printf(" enter the value of N ");
    scanf("%d",&i);
    for(n=1,s=0;n<=2*i;n++)
    {
        if(n%2)
        s=s+n;
    }
    printf("sum of first n odd natural numbers is %d",s);
}

