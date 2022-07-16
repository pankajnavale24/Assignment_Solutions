// Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a>0)
        printf("number is positive");
    if(a<0)
        printf("number is negative");
    if(a==0)
        printf(" number is zero");
}
