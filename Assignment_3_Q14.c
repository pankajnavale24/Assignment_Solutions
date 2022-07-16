//Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int a;
    printf(" enter a number");
    scanf("%d",&a);
    if(a%7==0 || a%3==0)
       printf("%d is divisible by 7 or divisible by 3.",a);
    else
       printf("%d is not divisible by 7 or divisible by 3.",a);
}

