// Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{

    int num,n,m;
    printf("enter a number");
    scanf("%d",&num);
    m=num/100;
    n=num/1000;
    if(m==0)
        printf("%d is not 3 digit number",num);
    else
    {
    if(n==0)
        printf("%d is 3 digit number",num);
    else
        printf("%d is not 3 digit number",num);
    }
    return 0;
}

