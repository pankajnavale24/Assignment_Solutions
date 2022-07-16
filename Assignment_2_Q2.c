//Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
 int num;
 printf("enter a number:");
 scanf("%d",&num);
 printf(" %d without its last digit is %d",num,num/10);
}

