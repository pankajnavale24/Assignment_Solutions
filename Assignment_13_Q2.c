//2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int num;
    printf("Enter your Limit:");
    scanf("%d",&num);
    printf("Sum of all odd numbers is: %d",SumOdd(num));
}

int SumOdd(int num)
{
   if(num==1)
    return 1;
return (2*num-1+SumOdd(num-1));
}
