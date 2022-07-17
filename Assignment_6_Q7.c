// Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int num,count;
    printf("enter a number ");
    scanf("%d",&num);
    for(count=1;count<=num;count++)
      {
        if(num)
        num=num/10;
      }
      printf("%d",count);
}
