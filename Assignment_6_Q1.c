// Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,s;
    printf(" enter the value of N");
    scanf("%d",&i);
    for(n=1,s=0;n<=i;n++)
        s=s+n;
    printf("sum of n terms is %d",s);
}
