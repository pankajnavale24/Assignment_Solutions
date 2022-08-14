//Write a program to sort elements of an array of size 10. Take array values from the user.
#include <stdio.h>
int main (){
   int num[10];
   int i, j, a;
   printf("Enter 10 elements\n ");
   for (i = 0; i < 10; ++i)
      scanf("%d", &num[i]);
   for (i = 0; i < 10; ++i){
      for (j = i + 1; j < 10; ++j){
         if (num[i] > num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The numbers in ascending order is:\n");
   for (i = 0; i < 10; ++i){
      printf("%d\n", num[i]);
   }
}
