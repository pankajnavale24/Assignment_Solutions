/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include<stdio.h>
int main()
{
int n,a,b;
printf ("enter a choice ");
  printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Exit");
  scanf("%d",&n);
   switch(n)
     {
     case 1:
     printf("enter two numbers ");
     scanf("%d%d",&a,&b);
     printf("sum is %d ",a+b);
     break ;
     case 2:
     printf("enter two numbers ");
     scanf("%d%d",&a,&b);
     printf("difference is %d ",a-b);
     break ;
     case 3:
     printf("enter two numbers ");
     scanf("%d%d",&a,&b);
     printf("product is %d ",a*b);
     break ;
     case 4:
     printf("enter two numbers ");
     scanf("%d%d",&a,&b);
     printf("division is %d ",a/b);
     break ;
     case 5:
     break ;
     }
}
