// 1. Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>
int main()
{
    int a , b;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    printf("LCM of %d and %d is %d ", a, b, lcm(a, b));
    return 0;
}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
