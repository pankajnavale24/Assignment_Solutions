//5. Write a program to find the maximum number between two numbers using a pointer

#include<stdio.h>
int main()
{
    int i=4,j=5;
    largest(i,j);
}
void largest(int *x,int *y)
{
    if(x>y)
     printf("%d is largest",x);
    else
     printf("%d is largest",y);

}
