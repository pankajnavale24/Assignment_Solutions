//Program to convert a positive number into a negative number and negative
//number into a positive number using a switch statement.
#include<stdio.h>
int main()
{
	float number;
	int choice;
	printf("Select 1, for Negative to positive\n");
	printf("Select 2, for positive to negative\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			    printf("Enter a Negative number ");
			    scanf("%f",&number);
				number=number*(-1);
				printf("the Positive form of the number is %.2f",number);
			break;
		case 2:
			    printf("Enter a positive number ");
			    scanf("%f",&number);
				number=number*(-1);
				printf("the negative form of the number is %.2f",number);
		    break;
        default:
		    printf("Invalid Input, or Characters entered");

	}
}
