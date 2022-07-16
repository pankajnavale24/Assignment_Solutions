//Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x>0)
        printf("number is positive");
    else
        printf(" number is non positive");
    return 0;
}
