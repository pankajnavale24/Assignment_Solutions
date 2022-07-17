// Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
    int num,i;
    printf("enter a number ");
    scanf("%d",&num);
    for(i=2;  ;i++)
    {
        if(num%i==0)
        break;
    }
    if(num==i)
    printf("\n %d is a Prime number\n ",num);
    else
    printf("\n %d is a not Prime number\n ",num);

}

