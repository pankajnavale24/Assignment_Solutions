// Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int i=1,n;
    printf(" enter the value of N");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d x %d =%d\n",n,i,n*i);
        i++;
    }
}

