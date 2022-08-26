//Write a function to find the greatest number from the given array of any size.
#include <stdio.h>
int main()
{
	int arr[] = {10, 324, 45, 90, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Largest in given array is %d", largest(arr, n));
	return 0;
}
int largest(int arr[], int n)
{
	int i;
		 max = arr[0];
	for (i = 1; i < n; i++)
		if (arr[i] > max)int
			max = arr[i];
	return max;
}

