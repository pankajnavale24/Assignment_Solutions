//8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    sum_array_pointer(a);

}
void sum_array_pointer(int *ptr)
{
    int i,sum=0;
    for(i=0;i<10;i++)
        sum=sum + ptr[i];
printf("sum is %d",sum);
}
