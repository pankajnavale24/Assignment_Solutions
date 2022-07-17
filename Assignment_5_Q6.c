// 6. Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int i=1,n;
    printf(" enter value of N");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",2*i);
        i++;
    }
}
