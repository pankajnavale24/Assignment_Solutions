//Write a function to print PASCAL Triangle. (TSRN)
#include <stdio.h>
int main()
{
	int n = 10;
	printPascal(n);
	return 0;
}
int binomialCoeff(int n, int k);
void printPascal(int n)
{
	for (int line = 0; line < n; line++)
	{
		for (int i = 0; i <= line; i++)
			printf("%d ",
					binomialCoeff(line, i));
		printf("\n");
	}
}
int binomialCoeff(int n, int k)
{
	int res = 1;
	if (k > n - k)
	k = n - k;
	for (int i = 0; i < k; ++i)
	{
		res *= (n - i);
		res /= (i + 1);
	}

	return res;
}
