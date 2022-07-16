// Write a program to take a three-digit number from the user and rotate its digits by  one position towards the right.
// 123 312
#include<stdio.h>
int main()
{
    int x,a,b,c;
    printf("enter 3 digit number");
    scanf("%d",&x);
    a=x%10;
    b=(x%100)/10;
    c=x/100;
    printf("%d%d%d",a,c,b);
}
