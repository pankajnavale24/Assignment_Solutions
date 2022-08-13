//10. Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>

int power(int b,int e)
{
    if(e==0)
        return 1;
    else
        return (b*power(b,e-1));
}

void main()
{
    int base,exponent;
    printf("Enter the base\n");
    scanf("%d",&base);
    printf("Enter the exponent\n");
    scanf("%d",&exponent);

    printf("Power(%d^%d) = %d\n",base,exponent,power(base,exponent));
}
