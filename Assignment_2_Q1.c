// Operators in C Language
//Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("\nlast digit of %d is %d",num,num%10);
}
