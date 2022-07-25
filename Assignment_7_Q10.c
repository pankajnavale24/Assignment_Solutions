//Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum, num;
    for(i=1;i<=1000;i++)
    {
        num = i;
        if (num <= 9)
            printf("%d ", num);
        else
        {
            sum = pow(num % 10, 3) + pow((num % 100 - num % 10) / 10, 3) + pow((num % 1000 - num % 100) / 100, 3);
            if (sum == i)
                printf("%d ", i);

        }
    }
}

