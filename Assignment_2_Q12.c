// Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main()
{
    float INR,USD;
    printf("enter amount in INR");
    scanf("%f",&INR);
    USD=INR*(1.0/76.23);
    printf("amount in USD is %2.f",USD);

}
