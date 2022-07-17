// 7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter N ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",2*(n+1-i));
        i++;
    }
}
