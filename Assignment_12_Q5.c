//5. Write a recursive function to print first N even natural numbers
#include<stdio.h>

void even(int);

int main()
{
    int n;

    printf("Please Enter any Integer Value  : ");
    scanf("%d", &n);

    printf("\nfirst %d even numbers  are:\n", n);
    even(n);

    return 0;
}

void even(int num)
{
    if(num >= 1)
    {
        even(num-1);
        printf("%d \n",2*num);
    }

}



