//1. Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
int main()
{
    int x,y,a,b;
    printf("Enter two values");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("%d %d ",x,y);

}
void swap(int *x,int *y)
    {
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    }
