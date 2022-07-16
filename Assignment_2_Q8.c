// Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
int main()
{
    int n,result;
    printf("enter a number ");
    scanf("%d",&n);
    result=n&1;
    if(result==1)
        printf("odd");
    else
    printf("even");
}
