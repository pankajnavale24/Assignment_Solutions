// 5. Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i=20;
    while(i>=1)
    {
        if(i%2)
        printf("%d\n",i);
        i--;
    }
}
//another way
/*#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",21-2*i);
        i++;
    }
}

*/

