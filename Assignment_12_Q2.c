//2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>

void display(int);

int main()
{
    int limit;

    printf("Please Enter any Integer Value  : ");
    scanf("%d", &limit);

    printf("\nNatural Numbers from 1 To %d are:", limit);
    display(limit);

    return 0;
}

void display(int num)
{
    if(num <= 0)
        return;
    else
      printf(" %d ", num);
      display(num-1);


}

