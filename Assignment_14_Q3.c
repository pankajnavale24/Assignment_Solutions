//3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
int main()
{
 int  i, a[10];
 int Even_Sum = 0, Odd_Sum = 0;
 printf("\nPlease Enter the Array Elements\n");
 for(i = 0; i < 10; i++)
 {
      scanf("%d", &a[i]);
 }

 for(i = 0; i < 10; i ++)
 {
   if(a[i] % 2 == 0)
   {
 	Even_Sum = Even_Sum + a[i];
   }
   else
   {
 	Odd_Sum = Odd_Sum + a[i];
   }
 }

 printf("\n The Sum of Even Numbers in this Array = %d ", Even_Sum);
 printf("\n The Sum of Odd Numbers in this Array = %d ", Odd_Sum);
 return 0;
}
