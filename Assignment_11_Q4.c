//Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int main()
{
    int n,x;
    printf(" enter any number ");
    scanf("%d",&n);
    x=prime(n);
    printf("next prime number is %d",x);
    getch();
}
int prime(int a)
{
   int i,j;
   for(i=a+1; ;i++)
   {
       for(j=1;j<i;j++)
       {
           if(i%j==0)
            break;
       }
       if(i==j)
       {
           return(j);
       }
   }
}
