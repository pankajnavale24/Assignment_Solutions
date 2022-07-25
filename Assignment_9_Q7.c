/*n
Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill. */
#include<stdio.h>
int main()
{
    float a,b,c;
    int n;
    printf("Enter Electricity Unit ");
    scanf("%d",&n);
    switch (n)
    {
    case 1 ... 50:
        a=n*0.50;
        break;
    case 51 ... 150:
        a= 25 + (n-50)*0.75;
        break;
    case 151 ... 250:
        a= 100 + (n-150)*1.20;
        break;
    default:
        a= 220 + (n-250)*1.50;
        break;
    }
    // b is subcharge
       b= a * 0.20;
       c= a+b;

	printf("Your Electric city Bill = %.2f",c);

}
