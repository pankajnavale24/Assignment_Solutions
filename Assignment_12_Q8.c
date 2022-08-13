//8. Write a recursive function to print binary of a given decimal number
#include <stdio.h>
int main()
{
	int decimal_number;
	printf("enter decimal number");
	scanf("%d",&decimal_number);
	printf("binary number = %d", find(decimal_number));
	return 0;
}
int find(int decimal_number)
{
	if (decimal_number == 0)
		return 0;
	else
		return (decimal_number % 2 + 10 *find(decimal_number / 2));
}
