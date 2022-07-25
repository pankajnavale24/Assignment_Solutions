// write a program to print next prime number of a given number
#include<stdio.h>
int main()
{
    int n,i,j,a=0;
    printf(" enter a number ");
    scanf(" %d",&n);
    for(i=n+1;i>0;i++)
    {   a=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                a++;
        }
        if(a==2)
        {
            printf("%d",i);
            break;
        }
    }

}
