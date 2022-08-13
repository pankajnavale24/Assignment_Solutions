//3. Write a recursive function to print first N odd natural numbers
#include<stdio.h>

void odd(int);

int main()
{
    int n;

    printf("Please Enter any Integer Value  : ");
    scanf("%d", &n);

    printf("\nfirst %d odd numbers  are:\n", n);
    odd(n);

    return 0;
}

void odd(int num)
{
    if(num >= 1)
    {
        odd(num-1);
        printf("%d \n",2*num-1);
    }

}


