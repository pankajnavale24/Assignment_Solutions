//Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
    int x;
    int a;
    float b;
    char c;
    double d;
    x=sizeof(a);
    printf("size of int variable is %d\n",x);
    x=sizeof(b);
    printf("size of float variable is %d\n",x);
    x=sizeof(c);
    printf("size of char variable is %d\n",x);
    x=sizeof(d);
    printf("size of double variable is %d\n",x);
}
