//3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int num;
    printf("Enter your Limit:");
    scanf("%d",&num);
    printf("Sum of first even numbers is: %d",Sumeven(num));
}

int Sumeven(int num)
{
   if(num==1)
    return 2;
return (2*num+Sumeven(num-1));
}
