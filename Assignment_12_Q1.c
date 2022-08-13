//1. Write a recursive function to print first N natural numbers
#include<stdio.h>

void display(int);

int main()
{
    int limit;

    printf("Enter the number of terms to be printed\n");
    scanf("%d", &limit);

    printf("\nNatural Numbers from 1 To %d are:", limit);
    display(limit);

    return 0;
}

void display(int num)
{
    if(num)
        display(num-1);
    else
        return;

    printf("\n%d\n", num);
}
