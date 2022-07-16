//Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int masin()
{
    int num,a,b,c,s;
    printf("enter a 3 digit number");
    scanf("%d",num);
    a=num%10;
    b=((num/10)%10);
    c=num/100;
    s=(a+b+c);
    printf("sum of 3 digits is %d",s);
}
