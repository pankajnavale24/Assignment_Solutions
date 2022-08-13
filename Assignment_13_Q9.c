//9. Write a program in C to count the digits of a given number using recursion.
#include <stdio.h>
int main()
{
   int n;
   int count=0;
   printf("Enter a number");
   scanf("%d",&n);
   while(n!=0)
   {
       n=n/10;
       count++;
   }

   printf("\nThe number of digits in an integer is : %d",count);
    return 0;
}
