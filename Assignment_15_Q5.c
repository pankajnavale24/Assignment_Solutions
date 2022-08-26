//5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
#include <stdio.h>
int main()
{
	int arr[10],i,occurance[10],j;
	printf("Enter 10 Number");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<10;i++)
	{
		occurance[i]=0;
		for(j=1;j<10;j++)
		{
			if(arr[i]==arr[j])
			{
				occurance[i]++;
			}
		}
		if(occurance[i]>1)
		{
			printf("Duplicate Element is %d and occurance is %d \n 		",arr[i],occurance[i]);
		}
	}
	return 0;
}
