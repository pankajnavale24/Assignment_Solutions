// Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int num1,num2,min,i;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    min=(num1<num2 ? num1 : num2);
    for(i=1;   ;)
    {
        if(min%num1==0 && min%num2==0)
        {
        printf("HCF of %d & %d is %d",num1,num2,min);
        break;
        }
        min++;
    }


}

