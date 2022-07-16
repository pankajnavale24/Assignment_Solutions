//Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf(" a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n a=%d b=%d",a,b);


}

