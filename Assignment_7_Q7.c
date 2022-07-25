//write a program to print all numbers between two given numbers
#include<stdio.h>
int main()
{
    int a,b,c,i;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    for(c=a+1;c<=b-1;c++)
    {
       for(i=2;i<c;i++)
       {
           if(c%i==0)
            break;
       }
       if(c==i)
        printf("%d\n",i);
    }
}
