//Program to Convert even number into its upper nearest odd number Switch Statement.
#include<stdio.h>
int main()
{
	int number;
	scanf("%d",&number);
	switch(number%2==0)
	{
        case 1:
				number=number+1;
				printf("the upper nearest odd number is %d",number);
		    break;

	}
}
