// 4. Write a program to print the first 10 odd natural numbers
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",2*i-1);
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
        if(i%2)
        printf("%d\n",i);
        i++;
    }
}

*/
