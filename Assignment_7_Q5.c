//Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
    int num1,num2,min,i;
    printf("enter two numbers ");
    scanf("%d %d",&num1,&num2);
    min=num1<num2 ? num1 : num2;
    for(i=2;i<=min;i++)
    {
        if(num1%i==0 && num2%i==0)
        break;
    }
     if(i == min+1)
      printf("numbers are co prime ");
     else
     printf("numbers are not co prime ");
}


