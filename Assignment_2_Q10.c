// Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)
#include<stdio.h>
int main()
{
    int x=2345,y;
    printf("%d\n",x);
    y=x%10;
    x=x/10;
    y=0;
    printf("%d%d",x,y);
}
