//Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
int x,result=0,count=0;
printf("enter a number");
scanf("%d",&x);
while(x!=0)
{
    result=x&1;
    count++;
    if(result==1)
    {
        printf("%d",count);
        break;
    }

       x=x>>1;
}
return 0;
}
