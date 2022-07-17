// 3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i=0,n;
    printf(" enter value of N ");
    scanf("%d",&n);
    while(i<n)
    {
        printf("%d\n",n-i);
        i++;
    }
}
