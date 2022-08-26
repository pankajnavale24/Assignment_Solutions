//7. Write a function in C to count a total number of duplicate elements in an array.
#include <stdio.h>

int main()
{
	int arr[10], i, j, Size, Count = 0;

	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &Size);

	printf("\n Please Enter %d elements of an Array  :  ", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}

	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
				break;
			}
		}
	}

 	printf("\n Total Number of Duplicate Elements in this Array  =  %d ", Count);

 	return 0;
}
