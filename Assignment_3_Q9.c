// Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf(" enter 1st number");
    scanf("%d",&a);
    printf(" enter 2nd number");
    scanf("%d",&b);
    printf(" enter 3rd number");
    scanf("%d",&c);
    if(a>b)
    {
    (b>c)?printf("%d is greatest than %d and %d",a,b,c):printf("%d is greatest than %d and %d",c,b,a);
    }
    else
    {
    (a>c)?printf("%d is greatest than %d and %d",b,a,c):printf("%d is greatest than %d and %d",c,b,a);
    }
}
