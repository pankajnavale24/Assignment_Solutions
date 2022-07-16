//Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int a;
    printf(" enter a number");
    scanf("%d",&a);
    if(a%3==0 && a%2==0)
            printf("%d is divisible by 3 and divisible by 2.",a);
    else
        printf("%d is not divisible by 3 and divisible by 2.",a);
}
