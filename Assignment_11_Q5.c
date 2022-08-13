//Write a function to print first N prime numbers (TSRN)
#include<stdio.h>

void main()
{
    int  i,n,p,count,flag;
    printf("Enter the number\n") ;
    scanf("%d",&n) ;
    printf("First %d prime numbers are \n",n) ;
    p=2;
    i=1;
    while(i<=n)
    {
        flag=1;
        for(count=2;count<=p-1;count++)
        {
            if(p%count==0)
            {
	            flag=0;
	            break;
            }
        }
            if(flag==1)
            {
                printf("%d ",p) ;
	            i++;
            }
        p++;
    }
}
