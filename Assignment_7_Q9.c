//Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main()
{
    int n,i,a,b,c,j,x,y,z,s,p;
       printf("enter a number ");
       scanf("%d",&n);
             p=n;
             i=n;
             j=n;
             n=n%10;
             a=n;
             i=i/10%10;
             b=i;
             j=j/100%10;
             c=j;
          x=a*a*a;
          y=b*b*b;
          z=c*c*c;
       s=x+y+z;
       if(s==p)
       printf("%d is armstrong number \n",p);
       else
       printf("%d is not armstrong number \n",p);
}
