// Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int num1,num2,max,i;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    max=(num1>num2 ? num1 : num2);
    for(i=1;   ;)
    {
        if(max%num1==0 && max%num2==0)
        {
        printf("LCM of %d & %d is %d",num1,num2,max);
        break;
        }
        max++;
    }


}


