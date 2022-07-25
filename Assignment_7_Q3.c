// Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
int main()
{

    int f1=0,f2=1,f3,n;
    printf(" enter a number ");
    scanf("%d",&n);
    if(n==0)
    printf("yes");
    f3=f1+f2;
   while(f3<n)
    {
    f1=f2;
    f2=f3;
    f3=f1+f2;
    }
    if(f3==n)
        printf("yes");
    else
        printf("no");
}



