//1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
#include<stdio.h>

int main()
{
    int arr[100], size, i, sum = 0;
    printf("Enter array size\n");
    scanf("%d",&size);

    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
    for(i = 0; i < size; i++)
          sum = sum + arr[i];
    printf("Sum of the array = %d\n",sum);

    return 0;
}
