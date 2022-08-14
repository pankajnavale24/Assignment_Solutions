//5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
  int a[10], Smallest,i, Position;
  for(i=0; i<10; i++)
   {
   	 scanf("%d",&a[i]);
   }

  Smallest = a[0];
  for(i=1; i<10; i++)
   {
    if(Smallest > a[i])
     {
       Smallest = a[i];
       Position = i;
	 }
   }

  printf("\nSmallest element in an Array = %d", Smallest);
  printf("\nIndex position of the Smallest element = %d", Position);

  return 0;
}
