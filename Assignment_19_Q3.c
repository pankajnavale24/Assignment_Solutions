/* 3. Write a program to read and display a 2D array of strings in C language.*/
#include<stdio.h>
int main()
{
   int i;
   char language[5][10] ;
   printf("Enter 5 programming languages:");
    for(i=0;i<5;i++)
   {
   scanf("%s[^\n]",language[i]);
   }
  printf("Languages are:\n");
  for(int i=0;i<5;i++)
  puts(language[i]);

  return 0;
}
