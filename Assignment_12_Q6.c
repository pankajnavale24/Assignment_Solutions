//6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>

void even(int);

int main()
{
    int n;

    printf("Please Enter any Integer Value  : ");
    scanf("%d", &n);

    printf("\nfirst %d even numbers in reverse order are:\n", n);
    even(n);

    return 0;
}

void even(int num)
{
    if(num >= 1)
    {
        printf("%d \n",2*num);
        even(num-1);
    }

}
