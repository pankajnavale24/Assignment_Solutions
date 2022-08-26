/*4. Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] ) */
// C program to rotate an array by
// d elements
#include <stdio.h>
void printArray(int arr[], int size);
int gcd(int a, int b);
void leftRotate(int arr[], int d, int n)
{
	int i, j, k, temp;
	d = d % n;
	int g_c_d = gcd(d, n);
	for (i = 0; i < g_c_d; i++) {
		temp = arr[i];
		j = i;
		while (1) {
			k = j + d;
			if (k >= n)
				k = k - n;
			if (k == i)
				break;
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	}
}
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
}
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	leftRotate(arr, 2, 7);
	printArray(arr, 7);
	getchar();
	return 0;
}
