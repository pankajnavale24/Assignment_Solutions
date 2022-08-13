//7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>

void display(int);

int main()
{
    int limit;

    printf("Please Enter any Integer Value  : ");
    scanf("%d", &limit);

    printf("\n Square of Natural Numbers from 1 To %d are:", limit);
    display(limit);

    return 0;
}

void display(int num)
{
    if(num <= 0)
        return;
    else

      display(num-1);
      printf(" %d ", num*num);

}
