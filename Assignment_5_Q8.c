// 8. Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int i=1,n;
    printf(" enter the value of N");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("suqare of %d =%d\n",i,i*i);
        i++;
    }
}

