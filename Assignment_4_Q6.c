//6. Write a program to print the first 10 even natural numbers
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",2*i);
        i++;
    }
}

/*
//another way
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=20)
    {
        if(i%2==0)
        printf("%d\n",i);
        i++;
    }
}
*/

