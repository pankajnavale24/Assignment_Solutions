// Write a program to find the Nth term of the Fibonnaci series.
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
    }
    printf(" %dth term is %d\n",N,c);
}
