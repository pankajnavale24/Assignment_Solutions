//Write a program to print greater between two numbers. Print one number of both are the same.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter first number: \n ");
    scanf("%d",&num1);
    printf("enter second number: \n ");
    scanf("%d",&num2);
    (num1==num2)?printf("both number are same"):(num1>num2)? printf(" %d is greater than %d",num1,num2):printf(" %d is greater than %d",num2,num1);
    return 0;
}
