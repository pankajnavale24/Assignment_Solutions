// Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include<stdio.h>
int main()
{
    //discriminant = b * b - 4 * a * c;
   double a,b,c,discriminant;
   printf(" enter coefficient of a b and c");
   scanf("%lf %lf %lf",&a,&b,&c);
   discriminant = b * b - 4 * a * c;
   if( discriminant>0)
    printf("real & distinct roots ");
   else if(discriminant==0)
    printf(" real and equal roots");
   else if(discriminant<0)
    printf(" imaginary roots");
}
