//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
int main()
{
    char *a[20],*b[20];
    printf("Enter two strings");
    fgets(a,20,stdin);
    fgets(b,20,stdin);
    swap(&a,&b);
    printf("%s %s",a,b);
    return 0;
}
void swap(char **x,char **y)
{
    char *temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
