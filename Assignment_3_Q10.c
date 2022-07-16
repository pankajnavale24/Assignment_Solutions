// Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    double CP,SP,profit,loss;
    printf("Enter coast price");
    scanf("%lf",&CP);
    printf("Enter selling price");
    scanf("%lf",&SP);
    if(SP>CP)
    {
    profit=SP-CP;
    printf("Profit percentage = %2.lf %% ",profit/CP*100);
    }
    else
    {
    loss=CP-SP;
    printf("loss percentage= %2.lf %%",loss/CP*100);
    }

}
