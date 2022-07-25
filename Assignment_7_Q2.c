// Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int N,i,c,a=-1,b=1;
    printf(" enter a number ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);

    }
}

