// Write a program to prime numbers under 100
#include<stdio.h>
int main()
{
    int c,i;
    for(c=1;c<=100;c++)
    {
       for(i=2;i<100;i++)
       {
           if(c%i==0)
            break;
       }
       if(c==i)
        printf("%d\n",i);

    }
}
